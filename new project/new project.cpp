#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> nums = { 1, 2, 3, 4, 5, 6};
    std::istream_iterator<int> input(std::cin);
    std::copy(input, std::istream_iterator<int>(), std::back_inserter(nums));

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
