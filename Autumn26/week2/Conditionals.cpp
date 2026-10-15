#include <iostream>

int main(){
    double n, absv;
    // n for the input, absv will be
    // the absolute value we compute

    std::cout << "give value please" << std::endl;
    std::cin >> n;

    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        // if not, its absolute value is the same as n
        absv=n;
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

}