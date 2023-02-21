#include <iostream>
#include <fstream>
#include <string>
auto findIndex() {
    std::string toReplace;
    std::string replaced;
    std::ifstream replaceFile("bee_replacement.txt");
    std::string buffer;
    while (std::getline(replaceFile, buffer)) {
        auto index = buffer.find("|");
        toReplace = buffer.substr(0, index);
        replaced = buffer.substr(index + 2, buffer.length());
    }
        return toReplace, replaced;
}
int main(){
    std::ifstream beeFile("bee.txt");
    std::ifstream smellyFile("smelly.txt");
    std::string buffer;
    std::string choice, choiceReplace;
    std::cin >> choice >> choiceReplace;
    if (choice == "bee") {
        findIndex();
        while(std::getline(beeFile,buffer)) {

            //std::cout << buffer << "\n";
        }
    } else if (choice == "smelly") {
        while(std::getline(smellyFile, buffer)){
            std::cout << buffer << "\n";
        }
    } else {
        std::cerr << "Invalid input. Cannot find a file named " << choice;
    }
    return 0;
}