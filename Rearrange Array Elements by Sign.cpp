#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> plus;
        vector<int> neg;
        vector<int> ans;

        // Separate positive and negative numbers into different vectors
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                plus.push_back(nums[i]);
                cout << nums[i] << " ";
            } else {
                neg.push_back(nums[i]);
                cout << nums[i] << " ";
            }
        }

        int first = 0;
        int second = 0;
        int n = plus.size();
        int m = neg.size();
        while (first < n && second < m) {
            ans.push_back(plus[first]);
            ans.push_back(neg[second]);
            first++;
            second++;
        }

        // Add any remaining elements from the positive vector
        while (first < n) {
            ans.push_back(plus[first]);
            first++;
        }

        // Add any remaining elements from the negative vector
        while (second < m) {
            ans.push_back(neg[second]);
            second++;
        }

        return ans;
    }
};

int main() {
    // Example usage:
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = sol.rearrangeArray(nums);

    // Display the rearranged array
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
