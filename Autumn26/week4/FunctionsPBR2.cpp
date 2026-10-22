#include <iostream>
#include <cmath>
// for the square root

bool rectangle(double y, double x, double& perimeter, double& area){

    area = x * y;
    perimeter = 2*x + 2*y;
    bool realsol = (area > 0);

    return realsol;
}

int main(){

    double a, b;
    // it is just a coincidence that these variables are named
    // like the function parameters, they could have a different name

    std::cout << "Enter sides of a rectangle: a, b" << std::endl;

    std::cin >> a >> b;

    double s1, s2;
    // we pass these variables uninitialised to the function
    // because the values will be provided in output 
    // by the function

    if(rectangle(a, b, s1, s2)){
        std::cout << "The perimeter and area are:" << std::endl;
        std::cout << s1 << ", " << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }

}