#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int search_vector(std::string s, const std::vector<std::string>& vin){
        for(int i=0;i<vin.size();i++){
            if(vin[i]==s){
                return i;
            }
        }
        return -1;
}

int main(){
    std::ifstream infile; 
    std::cout << "What is the name of the ad file?" << std::endl;
    std::string filename;
    std::cin >> filename;
    infile.open(filename);

    if(!infile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;

    }
    std::ifstream wordmap; 
    wordmap.open("wordmap.txt");

    if(!wordmap.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::ofstream realAdvertisement; 
    realAdvertisement.open("realAdvertisement.txt");

    if(!realAdvertisement.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    std::vector<std::string> falseword;
    std::vector<std::string> trueword;

    while(wordmap >> tmp){
        falseword.push_back(tmp);
        wordmap >> tmp;
        trueword.push_back(tmp);
    }

    while(infile >> tmp){
        if(search_vector(tmp,falseword)!=-1){
            realAdvertisement << trueword[search_vector(tmp,falseword)] << " ";
        }
        else{
            realAdvertisement << tmp << " ";
        }
    }

    infile.close();
    wordmap.close();
    realAdvertisement.close();
}