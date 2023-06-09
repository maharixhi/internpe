#include <iostream>
#include <unordered_set>
#include <vector>

int findDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return num;  // Duplicate found
        }
        seen.insert(num);
    }

    // No duplicate found
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

    int duplicate = findDuplicate(nums);
    if (duplicate != -1) {
        std::cout << "Duplicate found: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicate found." << std::endl;
    }

    return 0;
}
