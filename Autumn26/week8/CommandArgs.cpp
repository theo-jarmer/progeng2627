#include <iostream>
#include <fstream>
#include <string>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){
    std::ifstream infile;
    infile.open(argv[1]);
    std::cout << argv[1];
    std::string tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();
}