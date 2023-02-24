#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//auto findIndex(std::string toReplace, std::string replaced) {
//    std::ifstream replaceFile("bee_replacement.txt");
//    std::string buffer;
//    while (std::getline(replaceFile, buffer)) {
//        auto index = buffer.find("|");
//        for (int i=0;i<buffer.length();i++){
//            toReplace = buffer.substr(0, index);
//            replaced = buffer.substr(index + 2, buffer.length());
//
//        }
//
//    }
//    for (int i =0;i<toBeReplaced.size();i++){
//        std::cout <<
//    }
//        return toReplace, replaced;
//}
int main(){
    std::ifstream beeFile("bee.txt");
    std::ifstream smellyFile("smelly.txt");
    std::ifstream replacedFile("bee_replacement.txt");
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
        std::cout << buffer;
        while(std::getline(replacedFile, replacementBuffer)){
           auto index = replacementBuffer.find(" | ");
           auto toReplace = replacementBuffer.substr(0, index);
           auto onWhatReplace = replacementBuffer.substr(index+3);
            while (true) {
                try {
                    buffer.replace(buffer.find(toReplace), toReplace.length(), onWhatReplace);
                } catch(std::out_of_range&) {
                    break;
                }
           }
        }
        std::cout << buffer;
    } else if (choice == "smelly") {
        while(std::getline(smellyFile, buffer)){
            std::cout << buffer << "\n";
        }
    } else {
        std::cerr << "Invalid input. Cannot find a file named " << choice;
    }
    return 0;
}