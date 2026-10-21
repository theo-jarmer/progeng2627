#include <iostream>

int main(){
    int n,total;
    total = 1;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        total = total * (n-i);
    }
    std::cout << total << std::endl;
}