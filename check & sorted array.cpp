#include<iostream>
using namespace std;

class Solution {
public:
    bool check(int nums[],int n) {
        // int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
            count++;
            } 
        }
            if(nums[n-1] > nums[0]){
             count++;

            
        }
        return count<=1;
    }
};

int main()
{   int nums[]={10,59,76,31,56,};
    Solution s;
    int check=s.check(nums,5);
    if(check) cout<<"True";
    else cout<<"False";
    
    return 0;
}