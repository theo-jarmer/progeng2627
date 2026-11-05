#include <iostream>
#include <vector>
#include <string> 

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    merged.clear();
    int count1=0;
    int count2=0;
    for(int i=0;i<v1.size()+v2.size();i++){
        if(count1>v1.size()-1){
            merged.push_back(v2[count2]);
            count2++;
        }
        else if(count2>v2.size()-1){
            merged.push_back(v1[count1]);
            count1++;
        }
        else if (v1[count1]<v2[count2]){
            merged.push_back(v1[count1]);
            count1++;
        }
        else{
            merged.push_back(v2[count2]);
            count2++;
        }
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ 
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}
