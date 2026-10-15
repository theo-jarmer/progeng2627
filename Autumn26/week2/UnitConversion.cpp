#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the temp is a number, the unit name is text

    std::cin >> temp_in >> unit_in;
    // we don't print a prompt, we just read the input
    
    bool valid_unit = true;

    if((unit_in == "C") || (unit_in == "c")){
        unit_out = "F";
        temp_out = temp_in*(9.0/5.0)+32;
    }
    else if((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        temp_out = (temp_in-32)*(5.0/9.0);
    }
    else{
       valid_unit = false;
    }
    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

}