class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i:nums){
            pq.push(i);
        }
        while(!pq.empty()){
            int front = pq.top();
            pq.pop();
            if(!pq.empty() && pq.top() == front ){
                pq.pop();
            }else{
                ans.push_back(front);
                if(ans.size() == 2) break;
            }
        }
        return ans;
    }
};