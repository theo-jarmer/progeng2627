#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    std::vector<std::string> v;
    std::vector<std::string> vrev;
    for(int i = 0; i<s.size();i++){
        if(s[i] != ' '){ // Fixed: changed " " to ' ' because s[i] is a char
            v.push_back(char_to_string(s[i])); // Fixed: converted char to string to match your vector type
        }
    }
    for(int i = v.size() - 1; i >= 0; i--){
        vrev.push_back(v[i]);
    }
    
    if(v == vrev){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}