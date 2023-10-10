#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       int m=nums[0] ;
       int sum=0;
       for(int i=1;i<nums.size();i++)
           if(m<nums[i])
           m=nums[i];

        sum=k*m+(k-1)*k/2;
        return sum;
       
    }
};
int main() {
 vector<int>nums={1,2,3,4,5};
  int k=3;
  Solution Obj;
  Obj.maximizeSum(nums,k);
cout<< Obj.maximizeSum(nums,k);
  return 0;
}