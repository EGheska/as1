#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream file("bee.txt");
    std::string buffer;
    while(std::getline(file,buffer)){
        std::cout<<buffer << "\n";
    }
}

//int main1() {
//    std::ifstream inputFile("bee.txt");
//
//    std::ifstream replacedRulesSmelly("smelly_replacement.txt");
//    std::string choice, choiceReplace;
//    std::cin >> choice >> choiceReplace;
//    if (choice == "bee") {
//        inputFile.open("bee.txt");
//        if (inputFile.is_open()) {
//            std::string line;
//            std::getline(std::cin, line);
//            std::cout << line << std::endl;
////            auto replacementRules{ifstream("bee_replacement.txt")};
////            while (!replacementRules.eof()) {
////                string line;
////                getline(replacementRules, line);
////                cout << line << endl;
//
//            std::cout << "File is open\n";
//        } else {
//            std::cout << "File is not open" << std::endl;
//        }
//    } else if (choice == "smelly") {
//        inputFile.open("smelly.txt");
//        if (inputFile.is_open()) {
//            std::cout << "File is open\n";
//        } else {
//            std::cout << "File is not open" << std::endl;
//        }
//    } else {
//        std::cout << "Invalid input" << std::endl;
//    }
//    return 0;
//}


