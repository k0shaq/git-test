#include <iostream>
#include <iterator>
#include <list>

int main() {
    std::list<int> nums = { 1, 2, 3, 4 };
    std::list<int>::iterator itr;
    for (itr = nums.begin(); itr != nums.end(); ++itr) {
        std::cout << *itr << " ";
    }
    for (--itr; itr != nums.begin(); --itr) {
        std::cout << *itr << " ";
    }
}
