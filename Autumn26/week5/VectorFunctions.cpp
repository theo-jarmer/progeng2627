#include <iostream>
#include <vector>
#include <cmath>

int min_vector_element(const std::vector<double>& vin){
    if (vin.size()==0){
        return -1;
    }
    int index=0;
    double minimum = vin[0];
    for(int i = 1; i < vin.size(); i++){
        if(vin[i]<minimum){
            minimum = vin[i];
            index = i;
        }
    }
    return index;

}

int main(){
    std::vector<double> v;

    v = {};
    int expected_output = -1;
    std::cout << (min_vector_element(v) - expected_output) << std::endl;

    v = {1,2,3,4,5,6,7,8};
    expected_output = 0;
    std::cout << (min_vector_element(v) - expected_output) << std::endl;

    v = {2, -1.1, 7, -1.5};
    expected_output = 3;
    std::cout << (min_vector_element(v) - expected_output) << std::endl;

}