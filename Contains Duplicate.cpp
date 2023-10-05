#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;
    }
};
int main() {
  vector<int>n;
  n.push_back(2364);
  n.push_back(2364);
  n.push_back(360);
  n.push_back(950);
  Solution Obj;
  Obj.containsDuplicate(n);
  cout<< Obj.containsDuplicate(n);

      
  return 0;
}