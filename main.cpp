#include <iostream>
#include <fstream>

using namespace std;

auto replacementRuleBee(){

    ifstream replacedRulesBee("bee_replacement.txt");
    return 0;
}

int main() {
    ifstream inputFile("bee.txt");

    ifstream replacedRulesSmelly("smelly_replacement.txt");
    string choice, choiceReplace;
    cin >> choice >> choiceReplace;
    if (choice == "bee") {
        inputFile.open("bee.txt");
        if (inputFile.is_open()) {
            replacementRuleBee();
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


