#include <iostream>
#include <vector>
#include <cmath>

int search_vector(int n, const std::vector<int>& vin){
    if (vin.size()==0){
        return -1;
    }
    int index=-1;
    for(int i = 0; i < vin.size(); i++){
        if(vin[i]==n){
            return i;
        }
    }
    return index;

}

int main(){
    std::vector<int> v;

    v = {};
    int expected_output = -1;
    std::cout << (search_vector(1,v) - expected_output) << std::endl;

    v = {1,2,3,4,5,6,7,8};
    expected_output = 6;
    std::cout << (search_vector(7,v) - expected_output) << std::endl;

    v = {4,6,7,8,5,6,7};
    expected_output = 2;
    std::cout << (search_vector(7,v) - expected_output) << std::endl;

}