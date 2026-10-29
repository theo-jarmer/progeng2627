#include <iostream>
#include <vector>


void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    vout.clear();
    for(int i = 0; i < vin.size(); i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
        
    }
}

int main(){
    std::vector<double> v1,v3;
    int limit = 3;
    v1 = {0,1,2,3};
    filter_v(v1,limit,v3);
    for(int i = 0; i < v3.size(); i++){
            std::cout << v3[i] << std::endl;
    }
}