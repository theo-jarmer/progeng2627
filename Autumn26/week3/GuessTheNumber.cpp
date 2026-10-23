#include <iostream>

int main() {
    int lower, upper;
    std::cout << "Enter lower bound: ";
    std::cin >> lower;
    std::cout << "Enter upper bound: ";
    std::cin >> upper;

    int feedback = 0;

    while (feedback != 3) {
        int guess = lower + (upper - lower) / 2;
        std::cout << "Is your number " << guess << "?\n";
        std::cout << "1. Too low\n2. Too high\n3. Correct\nChoice: ";
        std::cin >> feedback;

        if (feedback == 1) {
            lower = guess;
        } else if (feedback == 2) {
            upper = guess;
        }
    }

    std::cout << "Hooraah! Game over." << std::endl;
}
