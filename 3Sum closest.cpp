class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int close = INT_MAX;
        int ans =0;
        for(int i=0;i<n;i++){
            int k=nums[i];
            int l = i+1;
            int r = n-1;
            while( l<r){
               int curr_closet = abs(target -(k+nums[l]+nums[r]));
               if(curr_closet < close){
                   close = curr_closet;
                   ans =(k+nums[l]+nums[r]);
               }
                else if(k+nums[l]+nums[r] <= target) l++;
                else r--;
            }
        }
        return ans;
    }
};