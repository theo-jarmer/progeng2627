#include <iostream>

int main() {
    int a,b;
    int remainder = 0;
    int multiples = 0;

    std::cout << "Enter numerator and denomenator" << std::endl;
    std::cin >> a >> b;
    remainder = a;

    while (remainder >= b) {
       remainder = remainder-b;
       multiples = multiples + 1;
    }
    std::cout << "q,r=" << multiples  << " " << remainder << std::endl;
}
