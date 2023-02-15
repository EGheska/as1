#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ifstream inputFile("bee.txt");

    ifstream replacedRulesSmelly("smelly_replacement.txt");
    string choice, choiceReplace;
    cin >> choice >> choiceReplace;
    if (choice == "bee") {
        inputFile.open("bee.txt");
        if (inputFile.is_open()) {
            string line;
            getline(inputFile, line);
            cout << line << endl;
//            auto replacementRules{ifstream("bee_replacement.txt")};
//            while (!replacementRules.eof()) {
//                string line;
//                getline(replacementRules, line);
//                cout << line << endl;

            cout << "File is open" << endl;


        } else {
            cout << "File is not open" << endl;
        }
    } else if (choice == "smelly") {
            inputFile.open("smelly.txt");
            if (inputFile.is_open()) {
                cout << "File is open" << endl;



            } else {
                cout << "File is not open" << endl;
            }
        } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}


