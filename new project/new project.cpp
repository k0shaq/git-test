#include <iostream>
#include <algorithm>
#include <vector>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::vector<int> nums1 = { 1, 3, 5, 7 };
    std::vector<int> nums2 = { 2, 4, 6, 8 };
    std::vector<int> merged;

    std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(merged));

    for (int num : merged) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
    }

