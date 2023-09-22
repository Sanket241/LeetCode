#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x=nums.size();
          // sort(nums.begin(),nums.end());
        for(int i=1;i<=x;i++){
        int count=0;
            for(int j=0;j<x;j++){
                if(nums[j]>=i){
                    count++;
                }
            }
            if(count==i) return i;
        }
        return -1;
    }
};

int main()
{
  vector<int>nums;
  nums.push_back(10);
  nums.push_back(20);
    Solution z;
    z.specialArray(nums);
  if(z.specialArray(nums)){
  cout<<z.specialArray(nums)<<endl;
    
  }
  else{
    cout<<1;
  }
  return 0;
}