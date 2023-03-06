#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::ifstream beeFile("bee.txt");
    std::ifstream smellyFile("smelly.txt");
    std::ifstream replacedFile("bee_replacement.txt");
    std::ifstream replacedSmelly("smelly_replacement.txt");
    std::string line;
    std::string replacedLine;
    std::string buffer;
    std::string replacementBuffer;
    std::string choice, choiceReplace;
    std::cin >> choice >> choiceReplace;
    std::string toReplace, replaced;
    if (choice == "bee") {
        while(std::getline(beeFile,line)) {
            buffer += line + "\n";
        }
        if (choiceReplace == "bee_replacement") {


            std::cout << "Original text: " << "\n";
            std::cout << buffer;
            while (std::getline(replacedFile, replacementBuffer)) {
                auto index = replacementBuffer.find(" | ");
                auto toReplace = replacementBuffer.substr(0, index);
                auto onWhatReplace = replacementBuffer.substr(index + 3);
                while (true) {
                    try {
                        buffer.replace(buffer.find(toReplace), toReplace.length(), onWhatReplace);
                    } catch (std::out_of_range &) {
                        break;
                    }
                }
            }
            std::cout << "Replaced text: " << "\n";
            std::cout << buffer;
        }else {
            std::cerr << "Invalid name of the replaced file. Cannot find a file named " << choiceReplace;
        }
    } else if (choice == "smelly") {
        while(std::getline(smellyFile, line)){
            buffer += line + "\n";
        }
        if (choiceReplace == "smelly_replaced"){
            std::cout << "Original text: " << "\n";
            std::cout << buffer << "\n";
            while(std::getline(replacedSmelly, replacementBuffer)){
                auto index = replacementBuffer.find(" | ");
                auto toReplace = replacementBuffer.substr(0,index);
                auto onWhatReplace = replacementBuffer.substr(index +3);
                while(true){
                    try {
                        buffer.replace(buffer.find(toReplace), toReplace.length(), onWhatReplace);
                    } catch (std::out_of_range&){
                        break;
                    }
                }
            }
            std::cout << "Replaced text: " << "\n";
            std::cout << buffer + "\n";
        } else {
            std::cerr << "Invalid name of the replaced file. Cannot find a file named " << choiceReplace;
        }
    } else {
        std::cerr << "Invalid input. Cannot find a file named " << choice;
    }
    return 0;
}