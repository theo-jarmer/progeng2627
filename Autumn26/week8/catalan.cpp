#include <iostream>
#include <vector>

// Helper function to compute the next Catalan number using the preceding ones
unsigned long next_catalan(const std::vector<unsigned long>& previous) {
    unsigned long sum = 0;
    int k = previous.size();
    
    for (int i = 0; i < k; i++) {
        sum += previous[i] * previous[k - 1 - i];
    }
    
    return sum;
}

std::vector<unsigned long> catalan_numbers(int n) {
    std::vector<unsigned long> current;
    
    if (n < 0) {
        return current;
    }
    
    // Base case: C0 = 1
    current.push_back(1);
    
    for (int i = 1; i <= n; i++) {
        current.push_back(next_catalan(current));
    }
    
    return current;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}
