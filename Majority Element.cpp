#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};
int main() {
 vector<int>nums;
  nums.push_back(2);
  nums.push_back(2);
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(2);
  Solution z;
  z.majorityElement(nums);
  cout<<z.majorityElement(nums);
      
  return 0;
}