#include <iostream>
#include <cmath>
// for the square root

bool divider(double a, double b, double& quotient, double& remainder){

    remainder = a;
    quotient = 0;

    while (remainder >= b) {
       remainder = remainder-b;
       quotient = quotient + 1;
    }

    return true;
}

int main(){

    double a, b;
    // it is just a coincidence that these variables are named
    // like the function parameters, they could have a different name

    std::cout << "Enter a/b" << std::endl;

    std::cin >> a >> b;

    double s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output 
    // by the function

    if(divider(a, b, s1, s2)){
        std::cout << "The quotient and remainder are:" << std::endl;
        std::cout << s1 << ", " << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }

}