#include <iostream>

int main(){
    int n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n%2;

    if (rem == 0) {
        std::cout << "The number is even" << std::endl;
    }
    else if (rem == 1){
        std::cout << "The number is odd" << std::endl;
    }
    else {
        std::cout << "Something went wrong";
    }

}