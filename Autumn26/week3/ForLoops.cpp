#include <iostream>

int main(){
    int x,n,total;
    std::cout << "Enter your x and your n for x**n:" << std::endl;
    std::cin >> x >> n;
    total = 1;
    for(int i = 0; i < n; i++){
        total = total*x;
        std::cout << total << std::endl;
    }
    std::cout << "Answer is:" << total << std::endl;
}