#include <iostream>
#include <fstream>


int main() {
    std::ifstream InputFile;
    InputFile.open("bee.txt");
    if (InputFile){
        std::cout << "1";
    } else {
        std::cout << "0";
    }
    return 0;
}
