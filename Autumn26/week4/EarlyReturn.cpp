#include <iostream>

int smallest_factor(int n){
        for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
        }
    }
    return n;
}

void prime_range(int a, int b){
    for (int i = a; i<= b;i++ ){
        if (smallest_factor(i)==i){
            std::cout << i << std::endl;
        }
    }
}

int main(){
    int n,n1;
    std::cout << "Enter start and end:" << std::endl;
    std::cin >> n >> n1;
    prime_range(n,n1);
}