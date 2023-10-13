#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1])
            return false;
        }
        return true;
    }
};
int main(){
  vector<int>nums={1,2,3,4};
  Solution Obj;
  Obj.divideArray(nums);
  cout<<Obj.divideArray(nums);
  
}
