#include <iostream>
#include <fstream>
#include <cstdlib>
// cstdlib header needed for EXIT_FAILURE

int main(){
    std::ifstream infile; 
    std::cout << "What is the name of the file?" << std::endl;
    std::string filename;
    std::cin >> filename;
    infile.open(filename);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }
    std::ifstream wordfile; 
    wordfile.open("words.txt");

    if(!wordfile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        // ...after we print an error message
        // we use the return to terminate function main
        // with code EXIT_FAILURE that represents something going wrong

    }

    // if the return is executed above (because the program enters the if)
    // then the following lines are not executed

    // the following lines are the same as in the corresponding example above

    std::string tmp;

    while(wordfile >> tmp){
        int count = 0;
        std::string tempword;
        while(infile >> tempword){
            if(tempword==tmp){
                count++;
            }
        }
        std::cout << tmp << ": " << count <<std::endl;
        infile.clear();
        infile.seekg(0, std::ios::beg);
    }

    infile.close();
    wordfile.close();
}