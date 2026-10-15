#include <iostream>
#include <string>

int main() {
    std::string user_name;
    std::cout << "What is your name? " << std::endl;
    std::cin >> user_name;
    std::string user_sname;
    std::cout << "What is your surname? " << std::endl;
    std::cin >> user_sname;
    std::cout << "Hello, " << user_name << " " << user_sname << "!" << std::endl;
}
