#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    std::string outputfilename;
    // as usual not a special name
    std::cout << "enter name of output file" << std::endl;

    std::cin >> outputfilename;

    std::ofstream outfile; 
    outfile.open(outputfilename);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    for(int i=v.size()-1;i>-1;i--){
        std::cout << v[i] <<std::endl;
        outfile << v[i] <<std::endl;
    }

    infile.close(); 

    // TODO: print the content of v in reversed order
    // onto a different text file

}