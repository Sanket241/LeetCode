#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
    private:

            int ismax(int n){
            int max1=0,smax=0;
            while(n>0){
                int digit=n%10;
                max1=digit;
                smax=max(max1,smax);
                n/=10;
            }
            return smax;
        }

public:
    int maxSum(vector<int>& nums) {
    int sum=0,maxsum=0;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(ismax(nums[i]) == ismax(nums[j])){
                sum=nums[i]+nums[j];
                maxsum=max(sum,maxsum);
            }
        }
    }
    return maxsum>0?maxsum:-1;
    }
};
int main() {
 vector<int>nums={51,71,17,24,42};
  Solution Obj;
  Obj.maxSum(nums);
cout<< Obj.maxSum(nums);
  return 0;
}