#include <iostream>
#include <vector>
#include <algorithm> // for std::max
#include <climits> // for INT_MIN

using namespace std;

// Solution class containing the maxSubArray function.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Edge case: if the array contains only one element, return that element.
        if (nums.size() == 1) {
            return nums[0];
        }

        // Initialize max_sum as the first element and current_sum as 0.
        int max_sum = nums[0];
        int current_sum = 0;

        // Traverse the array.
        for (int i = 0; i < nums.size(); ++i) {
            // If current_sum is negative, reset it to 0 (start a new subarray).
            if (current_sum < 0) {
                current_sum = 0;
            }

            // Add the current element to current_sum.
            current_sum += nums[i];

            // Update max_sum if current_sum is greater.
            max_sum = std::max(max_sum, current_sum);
        }

        return max_sum;
    }
};

// Function to run a single test case.
void runTest(vector<int> nums, int expected, int testCaseNumber) {
    Solution sol;
    int result = sol.maxSubArray(nums);
    cout << "Test Case " << testCaseNumber << ": ";
    if (result == expected) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed (Expected: " << expected << ", Got: " << result << ")" << endl;
    }
}

// Main function containing test cases.
int main() {
    // Test Case 1: Simple positive numbers
    runTest({1, 2, 3, 4, 5}, 15, 1);

    // Test Case 2: Mix of positive and negative numbers
    runTest({-2, 1, -3, 4, -1, 2, 1, -5, 4}, 6, 2);

    // Test Case 3: All negative numbers
    runTest({-3, -4, -1, -2, -5, -4}, -1, 3);

    // Test Case 4: Single element positive
    runTest({5}, 5, 4);

    // Test Case 5: Single element negative
    runTest({-5}, -5, 5);

    // Test Case 6: Larger array with mixed values
    runTest({1, 2, 3, -2, 5, -1, 2, 3, -10, 2, 3, 4}, 17, 6);

    // Test Case 7: Multiple elements with a single positive peak
    runTest({-1, -2, -3, 10, -1, -2, -3}, 10, 7);

    // Test Case 8: All zeros
    runTest({0, 0, 0, 0, 0}, 0, 8);

    // Test Case 9: Empty array (not a typical case, but good for robustness)
    runTest({}, 0, 9);

    // Test Case 10: Two positive numbers
    runTest({2, 1}, 3, 10);

    // Test Case 11: Two negative numbers
    runTest({-1, -2}, -1, 11);

    // Test Case 12: Combination of large positive and negative values
    runTest({1000, -1, 1000, -2, 1000}, 2997, 12);

    return 0;
}
