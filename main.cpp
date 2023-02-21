#include <iostream>
#include <fstream>
#include <string>
auto BeeRules(std::string replace){
    return replace;
}
int main(){
    std::ifstream beeFile("bee.txt");
    std::ifstream smellyFile("smelly.txt");
    std::string buffer;
    std::string choice, choiceReplace;
    std::cin >> choice >> choiceReplace;
    if (choice == "bee") {
        while(std::getline(beeFile,buffer)) {
            BeeRules(buffer);
            std::cout << buffer << "\n";
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




int main1() {
    std::ifstream inputFile("bee.txt");

    std::ifstream replacedRulesSmelly("smelly_replacement.txt");
    std::string choice, choiceReplace;
    std::cin >> choice >> choiceReplace;
    if (choice == "bee") {
        inputFile.open("bee.txt");
        if (inputFile.is_open()) {
            std::string line;
            std::getline(std::cin, line);
            std::cout << line << std::endl;
            auto replacementRules{ifstream("bee_replacement.txt")};
            while (!replacementRules.eof()) {
                string line;
                getline(replacementRules, line);
                cout << line << endl;

            std::cout << "File is open\n";
        } else {
            std::cout << "File is not open" << std::endl;
        }
    } else if (choice == "smelly") {
        inputFile.open("smelly.txt");
        if (inputFile.is_open()) {
            std::cout << "File is open\n";
        } else {
            std::cout << "File is not open" << std::endl;
        }
    } else {
        std::cout << "Invalid input" << std::endl;
    }
    return 0;
}


