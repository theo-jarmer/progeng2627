#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)
void myswap(double& a, double& b){

    int tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void sort_two_numbers(double& s1, double& s2){
    double temp;
    if (s1 >= s2){
        myswap(s1,s2);
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_two_numbers(n1, n2);
    sort_two_numbers(n2, n3);
    sort_two_numbers(n1, n2);
    std::cout << n1 << ", " << n2 << ", " << n3 << std::endl;
}