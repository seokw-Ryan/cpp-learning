#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, int> numMap;
        /*for(int i=0; i<nums.size(); ++i){
            for(int j=i+1; j<nums.size(); ++j){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }*/
        for (int i = 0; i < nums.size(); ++i) {
            int target = nums[i];
            if (numMap.find(target) == numMap.end()) {
                //return {numMap[target], i};
                numMap[nums[i]] = i;
            } else {
                return true;
            }
        //numMap[nums[i]] = i;
    }
        return false;
    }
};

// Function to run and test various cases
void runTests() {
    Solution solution;

    // Test Case 1: No duplicates
    std::vector<int> testCase1 = {1, 2, 3, 4, 5};
    assert(solution.containsDuplicate(testCase1) == false);
    std::cout << "Test Case 1 Passed!" << std::endl;

    // Test Case 2: Contains duplicates
    std::vector<int> testCase2 = {1, 2, 3, 4, 1};
    assert(solution.containsDuplicate(testCase2) == true);
    std::cout << "Test Case 2 Passed!" << std::endl;

    // Test Case 3: All elements are duplicates
    std::vector<int> testCase3 = {1, 1, 1, 1};
    assert(solution.containsDuplicate(testCase3) == true);
    std::cout << "Test Case 3 Passed!" << std::endl;

    // Test Case 4: Empty array
    std::vector<int> testCase4 = {};
    assert(solution.containsDuplicate(testCase4) == false);
    std::cout << "Test Case 4 Passed!" << std::endl;

    // Test Case 5: Single element
    std::vector<int> testCase5 = {10};
    assert(solution.containsDuplicate(testCase5) == false);
    std::cout << "Test Case 5 Passed!" << std::endl;

    // Test Case 6: Large numbers
    std::vector<int> testCase6 = {1000000, 2000000, 3000000, 1000000};
    assert(solution.containsDuplicate(testCase6) == true);
    std::cout << "Test Case 6 Passed!" << std::endl;

    // Test Case 7: Negative numbers
    std::vector<int> testCase7 = {-1, -2, -3, -4, -1};
    assert(solution.containsDuplicate(testCase7) == true);
    std::cout << "Test Case 7 Passed!" << std::endl;

    // Test Case 8: Mixed positive and negative numbers
    std::vector<int> testCase8 = {-1, 2, -3, 4, 5, -1};
    assert(solution.containsDuplicate(testCase8) == true);
    std::cout << "Test Case 8 Passed!" << std::endl;

    std::cout << "All Test Cases Passed!" << std::endl;
}

int main() {
    // Run all the test cases
    runTests();
    return 0;
}