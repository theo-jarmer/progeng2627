#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp = 1;
    int n,t;
    std::cin >> n; // we read a number

    std::cout << "please enter a sequence" << std::endl;
    for (int i = 0; i < n; i++){ // while the number in input is not 0...
        std::cin >> tmp; // we read a number
        sequence.push_back(tmp); // we store the number in the vector
    }
    
    std::cout << "Enter max allowed:" << std::endl;
    std::cin >> t; // we read a number

    // in order to print the vector we need 
    // to print it one element at a time
    // so we need to index it

    // i is the variable we use in this loop for the indexing of the vector
    // it starts at 0 and increases by 1 at each iteration
    // when the index reaches the size of the vector we leave the loop
    // valid indices are 0 to (sequenze.size() - 1)

    for(int i = 0; i < sequence.size(); i++){
        if (sequence[i]<t){
            std::cout << sequence[i] << std::endl;
        }
        
    }

}