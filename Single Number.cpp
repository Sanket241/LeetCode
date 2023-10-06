#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto x:nums){
            ans=ans^x;
        }
            return ans;
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
  Obj.singleNumber(n);
  cout<< Obj.singleNumber(n);

      
  return 0;
}