#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int search_vector(std::string s, const std::vector<std::string>& vin){
        for(int i=0;i<vin.size();i++){
            if(vin[i]==s){
                return i;
            }
        }
        return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
        vout.clear();
        for(int i=0;i<vin1.size();i++){
            if(search_vector(vin1[i],vout)==-1){
                vout.push_back(vin1[i]);
            }
        }
        for(int i=0;i<vin2.size();i++){
            if(search_vector(vin2[i],vout)==-1){
                vout.push_back(vin2[i]);
            }
        }
        return;
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout.clear();
    for(int i=0;i<vin1.size();i++){
            if((search_vector(vin1[i],vin2)!=-1)&&(search_vector(vin1[i],vout)==-1)){
                vout.push_back(vin1[i]);
            }
        }
        return;
}

int main(){

    std::string input1filename;
    // as usual not a special name
    std::cout << "enter name of input 1 file" << std::endl;

    std::cin >> input1filename;

    std::ifstream infile1; 
    infile1.open(input1filename);
    std::string input2filename;
    // as usual not a special name
    std::cout << "enter name of input 2 file" << std::endl;

    std::cin >> input2filename;

    std::ifstream infile2; 
    infile2.open(input2filename);

    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::vector<std::string> un;
    std::vector<std::string> intersection;

    std::ofstream unionfile; 
    unionfile.open("union.txt");
    std::ofstream interfile; 
    interfile.open("intersection.txt");

    std::vector<int> v;

    if(!infile1.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!unionfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!interfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile1 >> tmp){
        v1.push_back(tmp); 
    }
    while(infile2 >> tmp){
        v2.push_back(tmp); 
    }

    union_vector(v1,v2,un);
    intersection_vector(v1,v2,intersection);

    for(int i=0;i<un.size();i++){
        unionfile << un[i] << std::endl;
    }
    for(int i=0;i<intersection.size();i++){
        interfile << intersection[i] << std::endl;
    }

    infile1.close(); 
    infile2.close();
    unionfile.close(); 
    interfile.close();  
}