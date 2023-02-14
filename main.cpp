#include <iostream>
#include <fstream>


using namespace std;
int main() {
    fstream files;
    int userInput[3] = {};
    for (int i=0;i<3;i++){
     cin >> userInput[i];
    }
    for (int i=0;i<3;i++){
        if (userInput[i] = 1){
            files.open("bee.txt");
            if (files) {
                cout << "File exist";
            }
        } else if (userInput[i] = 2) {

        } else if (userInput[i] = 3){

        }
    }
    return 0;
}
