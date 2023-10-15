#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
    int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j] < target){
                  ans++;
                }
            }
        }
  return ans;
    }
};
int main(){
  vector<int>nums={-1,1,2,3,1};
  int n=2;
  Solution Obj;
  Obj.countPairs(nums,n);
  cout<<Obj.countPairs(nums,n);
  
}
