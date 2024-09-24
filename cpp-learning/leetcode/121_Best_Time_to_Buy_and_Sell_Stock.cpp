#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>


// Function to find the maximum profit
int maxProfit(std::vector<int>& prices) {
    int minPrice = INT_MAX;  // Initialize to maximum possible value
    int maxProfit = 0;       // Maximum profit is initially zero
    
    for (int price : prices) {
        // Update minimum price if current price is lower
        minPrice = std::min(minPrice, price);
        // Update maximum profit if current profit is higher
        maxProfit = std::max(maxProfit, price - minPrice);
    }
    
    return maxProfit;
}

// Function to print test case results
void printTestCaseResult(std::vector<int> prices, int expected) {
    int result = maxProfit(prices);
    std::cout << "Input: [";
    for (int price : prices) std::cout << price << " ";
    std::cout << "]\n";
    std::cout << "Expected Output: " << expected << "\n";
    std::cout << "Actual Output: " << result << "\n\n";
}

int main() {
    // Test Cases
    printTestCaseResult({7, 1, 5, 3, 6, 4}, 5);
    printTestCaseResult({7, 6, 4, 3, 1}, 0);
    printTestCaseResult({1, 2, 3, 4, 5}, 4);
    printTestCaseResult({3, 3, 5, 0, 0, 3, 1, 4}, 4);
    printTestCaseResult({4, 4, 4, 4}, 0);
    printTestCaseResult({2, 1, 2, 1, 2, 1, 2}, 1);
    printTestCaseResult({5}, 0);

    return 0;
}
