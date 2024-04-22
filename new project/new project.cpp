#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums = { 10, 9, 8, 7, 6, 5 };
    std::sort(nums.begin(), nums.end());

    for (int num : nums) {
        std::cout << num << ' ';
    }
    // Output: 5 6 7 8 9 10
}