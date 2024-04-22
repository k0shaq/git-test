#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main() {
    std::vector<int> nums = { 1, 2, 3, 4, 5, 6 };
    std::vector<int>::iterator itr;
    for (itr = nums.begin(); itr != nums.end(); ++itr) {
        std::cout << *itr << " ";
    }
    for (itr -= 1; itr != nums.begin() - 1; --itr) {
        std::cout << *itr << " ";
    }
}
