#include <iostream>
#include <cmath>




double mypow(double base, int exp){
    double result=1; 
    
    for (int i=0;i<abs(exp);i++){
        result *= base;
    }

        if (exp<0)
    {
        result = 1/result;
    }

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

double sumOfPowers(double x, int n){

    double total = 0; // not a special name, just a name

    for(int i=1; i<=n; i++){
        total = total + mypow(x,i);
    }

    return total;

}

int main(){
    int n;
    double x;
    std::cout << "Enter base and max power:" << std::endl;
    std::cin >> x >> n;
    std::cout <<  sumOfPowers(x,n) << std::endl;

}