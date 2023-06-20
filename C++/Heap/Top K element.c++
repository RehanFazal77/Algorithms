#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

std::vector<int> topKElements(const std::vector<int>& nums, int k) {
    // Create a min-heap using priority_queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Iterate through the numbers
    for (int num : nums) {
        // Add the number to the min-heap
        minHeap.push(num);

        // If the size of the min-heap exceeds k, remove the smallest element
        if (minHeap.size() > k)
            minHeap.pop();
    }

    // Extract the top-k elements from the min-heap
    std::vector<int> topK;
    while (!minHeap.empty()) {
        topK.push_back(minHeap.top());
        minHeap.pop();
    }

    // Reverse the order to get the top-k elements in descending order
    std::reverse(topK.begin(), topK.end());

    return topK;
}

int main() {
    std::vector<int> nums = {5, 2, 9, 3, 7, 1, 8, 6, 4};
    int k = 3;

    std::vector<int> topK = topKElements(nums, k);

    std::cout << "Top " << k << " elements: ";
    for (int num : topK) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
