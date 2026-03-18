// kSumSubset 2

#include <iostream>
#include <vector>

bool isSubsetSum(const std::vector<int>& numArray, int target, int currentIndex, int currentSum) {
    if (currentSum == target) {
        return true;
    }

    if (currentIndex == numArray.size() || currentSum > target) {
        return false;
    }

    if (isSubsetSum(numArray, target, currentIndex + 1, currentSum + numArray[currentIndex])) {
        return true;
    }

    return isSubsetSum(numArray, target, currentIndex + 1, currentSum);
}

bool kSumSubset(const std::vector<int>& numArray, int k) {
    return isSubsetSum(numArray, k, 0, 0);
}

int main()
{
    std::cout << kSumSubset({7, 3, 2, 5, 8},14) << std::endl;
    std::cout << kSumSubset({72, 4, 6, 8},11) << std::endl;
    std::cout << kSumSubset({7, 5, 3, 1},4) << std::endl;
    std::cout << kSumSubset({14, 8, 12, 9},21) << std::endl;
}