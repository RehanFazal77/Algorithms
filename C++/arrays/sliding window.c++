#include <iostream>
#include <vector>

int maxSumSubarray(const std::vector<int>& nums, int k) {
    int n = nums.size();
    int windowSum = 0;
    int maxSum = 0;

    // Calculate the sum of the first window
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }

    // Slide the window and update the maximum sum
    for (int i = k; i < n; i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = std::max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    std::vector<int> nums = {100, 200, 300, 400};
    int k = 2;

    int result = maxSumSubarray(nums, k);
    std::cout << "Maximum sum of a subarray of size " << k << ": " << result << std::endl;

    return 0;
}
