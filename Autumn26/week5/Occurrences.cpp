#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp = 1;
    int n,t;
    std::cout << "please enter n" << std::endl;

    std::cin >> n; // we read a number
    for (int i = 0; i < n; i++){ // while the number in input is not 0...
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> tmp; // we read a number
        sequence.push_back(tmp); // we store the number in the vector
    }
    
    std::cout << "Enter number to check occurrences:" << std::endl;
    std::cin >> t; // we read a number

    // in order to print the vector we need 
    // to print it one element at a time
    // so we need to index it

    // i is the variable we use in this loop for the indexing of the vector
    // it starts at 0 and increases by 1 at each iteration
    // when the index reaches the size of the vector we leave the loop
    // valid indices are 0 to (sequenze.size() - 1)
    int counter = 0;
    std::vector<int> occurrences;
    for(int i = 0; i < sequence.size(); i++){
        if (sequence[i]==t){
            counter++;
            occurrences.push_back(i);
        }
    }
    std::cout << "Has " << counter << " occurrences, at the following posionts:";
    for(int i = 0; i < occurrences.size(); i++){

    std::cout << ", " << occurrences[i];
    }
}