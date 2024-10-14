#include <iostream>
#include <vector>
#include <cassert>
#include <chrono>
// Function to solve the problem
std::vector<int> productExceptSelf(const std::vector<int>& nums) {
    // //My Initial Solution
    // std::vector<int> answer;

    // if(nums.size() == 1){
    //     answer.push_back(1);
    //     return answer;
    // }

    //     for(int i=0; i<nums.size(); ++i){
    //         if(i != nums.size()-1){
    //             int product = nums[i+1];

    //             for(int j=0; j<nums.size(); ++j){
                
    //                 if(i != j && j != i+1){
    //                     product *= nums[j];
    //                 }
    //             }
    //         answer.push_back(product);

    //         } else {
    //             int product = nums[0];

    //             for(int j=0; j<nums.size()-1; ++j){
    //                 if(i != j && j != 0){
    //                     product *= nums[j];
    //                 }
    //             }

    //             answer.push_back(product);
    //         }
            
            
    //     }

    //     return answer;
    int n = nums.size();
    std::vector<int> result(n, 1);
    
    // Calculate left product for each element
    int left_product = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = left_product;
        left_product *= nums[i];
    }
    
    // Calculate right product for each element and multiply with left product
    int right_product = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= right_product;
        right_product *= nums[i];
    }
    
    return result;
}

// Function to run the test cases
void runTestCases() {
    // Test case 1
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> expected1 = {24, 12, 8, 6};
    assert(productExceptSelf(nums1) == expected1);
    std::cout << "Test case 1 passed!" << std::endl;

    // Test case 2
    std::vector<int> nums2 = {0, 0};
    std::vector<int> expected2 = {0, 0};
    assert(productExceptSelf(nums2) == expected2);
    std::cout << "Test case 2 passed!" << std::endl;

    // Test case 3
    std::vector<int> nums3 = {1, 0};
    std::vector<int> expected3 = {0, 1};
    assert(productExceptSelf(nums3) == expected3);
    std::cout << "Test case 3 passed!" << std::endl;

    // Test case 4
    std::vector<int> nums4 = {-1, 1, 0, -3, 3};
    std::vector<int> expected4 = {0, 0, 9, 0, 0};
    assert(productExceptSelf(nums4) == expected4);
    std::cout << "Test case 4 passed!" << std::endl;

    // Test case 5: Single element case
    std::vector<int> nums5 = {5};
    std::vector<int> expected5 = {1};
    assert(productExceptSelf(nums5) == expected5);
    std::cout << "Test case 5 passed!" << std::endl;

    // Test case 6: All elements are 1
    std::vector<int> nums6 = {1, 1, 1, 1};
    std::vector<int> expected6 = {1, 1, 1, 1};
    assert(productExceptSelf(nums6) == expected6);
    std::cout << "Test case 6 passed!" << std::endl;
}

// Main function to run the tests
int main() {
    auto start = std::chrono::high_resolution_clock::now();
    runTestCases();
    std::cout << "All test cases passed!" << std::endl;

    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration in milliseconds
    std::chrono::duration<double, std::milli> execution_time = end - start;

    // Output the execution time
    std::cout << "Execution time: " << execution_time.count() << " ms" << std::endl;
    return 0;
}
