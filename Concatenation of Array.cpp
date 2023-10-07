#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
 class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        
        for( int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
           for( int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        return  ans;
    }
};
int main() {
  // int n=[10,10,658,351,6456,565];
  vector<int>n;

  n.push_back(10);
  n.push_back(10);
  n.push_back(20);
  n.push_back(20);
  n.push_back(30);
  n.push_back(30);
  n.push_back(50);
  Solution Obj;
    vector<int>ans=Obj.getConcatenation(n);
  for (int num : ans) {
        std::cout << num << " ";
    }

      
  return 0;
}