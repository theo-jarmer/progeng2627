#include <iostream>

int main(){
    int n,curmax,counter = 0;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;

    curmax = n;

    while(n != 1){

        counter++;

        if(n % 2 == 0){
            n = n/2;
        }
        else{
            n = 3*n +1;
            // ...we update the current max
        }
        if(n > curmax){
            curmax = n;
            // ...we update the current max
        }

        std::cout << n << " ";
        // we print the current maximum in any case 
        // whether or not it was updated in this iteration of the loop
    }
    std::cout << "- Number of steps:" << counter << " - Maximum: " << curmax;

}