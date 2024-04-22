#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> nums = { 8, 3, 9, 4, 1, 5, 0, 9, 2, 6, 5, 3 };
    std::partial_sort(nums.begin(), nums.begin() + 5, nums.end());

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
