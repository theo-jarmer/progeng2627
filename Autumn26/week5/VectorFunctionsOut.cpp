#include <iostream>
#include <vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    vout.clear();
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i <vin2.size(); i++){
        vout.push_back(vin2[i]);
    }

}

int main(){
    std::vector<int> v1,v2,v3;
    v1 = {0,1,2,3};
    v2 = {9,8,7,6,5};
    append_vectors(v1,v2,v3);
    for(int i = 0; i < v3.size(); i++){
            std::cout << v3[i] << std::endl;
    }
}