#include <iostream>
#include <unordered_map>
#include <vector>

int findNonUniqueDuplicate(const std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;

    for (int num : nums) {
        countMap[num]++;
    }

    for (const auto& pair : countMap) {
        if (pair.second > 1) {
            return pair.first;  // Non-unique duplicate found
        }
    }

    // No non-unique duplicate found
    return -1;
}

int main() {
    std::vector<int> nums;
    int num;

    std::cout << "Enter integers (enter -1 to stop):" << std::endl;

    while (true) {
        std::cin >> num;

        if (num == -1) {
            break;  // Stop taking input
        }

        nums.push_back(num);
    }

    int nonUniqueDuplicate = findNonUniqueDuplicate(nums);
    if (nonUniqueDuplicate != -1) {
        std::cout << "Non-unique duplicate found: " << nonUniqueDuplicate << std::endl;
    } else {
        std::cout << "No non-unique duplicate found." << std::endl;
    }

    return 0;
}
