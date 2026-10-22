#include <iostream>

// this is the only different line:
void myswap(std::string& n1, std::string& n2){

    std::string tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

int main(){
    std::string n1, n2;

    std::cout << "please enter two strings" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}