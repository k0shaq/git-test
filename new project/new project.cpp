#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> nums = { 1, 2, 3, 4, 5 };
    std::ostream_iterator<int> output(std::cout, " ");
    std::copy(nums.begin(), nums.end(), output);

    return 0;
}
