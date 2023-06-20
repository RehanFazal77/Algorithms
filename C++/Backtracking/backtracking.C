#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    // Base case: if the current combination is complete, add it to the result
    if (current.size() == nums.size()) {
        result.push_back(current);
        return;
    }

    // Explore all possible choices for the next element
    for (int i = 0; i < nums.size(); i++) {
        // Choose the current number
        current.push_back(nums[i]);

        // Recursive call to explore further choices
        backtrack(nums, current, result);

        // Unchoose the current number (backtrack)
        current.pop_back();
    }
}

vector<vector<int>> generatePermutations(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    // Call the backtracking function
    backtrack(nums, current, result);

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = generatePermutations(nums);

    cout << "Permutations: " << endl;
    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
