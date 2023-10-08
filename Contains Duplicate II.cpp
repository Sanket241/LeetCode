#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

  class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                int diff=abs(mp[nums[i]]-i);
                if(diff <= k) return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};
int main() {
 vector<int>nums={1,2,3,1};
  int k=1;
  Solution Obj;
  Obj.containsNearbyDuplicate(nums,k);
  if( Obj.containsNearbyDuplicate(nums,k)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
  return 0;
}