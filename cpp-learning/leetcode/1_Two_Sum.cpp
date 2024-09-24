#include <iostream>
#include <vector>
#include <unordered_map>

// Function for Two Sum
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Map to store numbers and their indices
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

// Function to print test case results
void printTestCaseResult(std::vector<int> nums, int target, std::vector<int> expected) {
    std::vector<int> result = twoSum(nums, target);
    std::cout << "Input: [";
    for (int num : nums) std::cout << num << " ";
    std::cout << "], Target: " << target << "\n";
    std::cout << "Expected Output: [" << expected[0] << ", " << expected[1] << "]\n";
    std::cout << "Actual Output: [" << result[0] << ", " << result[1] << "]\n\n";
}

int main() {
    // Test Cases
    printTestCaseResult({2, 7, 11, 15}, 9, {0, 1});
    printTestCaseResult({-1, -2, -3, -4, -5}, -8, {2, 4});
    printTestCaseResult({0, 4, 3, 0}, 0, {0, 3});
    printTestCaseResult({3, 2, 4}, 6, {1, 2});
    printTestCaseResult({1, 3, 7, 9, 2}, 3, {0, 4});
    printTestCaseResult({3, 3}, 6, {0, 1});
    printTestCaseResult({-3, -1, -2, -4}, -5, {1, 3});
    
    return 0;
}
