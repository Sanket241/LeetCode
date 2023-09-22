#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i] == arr[j]*2 || arr[i]*2 ==arr[j]){
                    return true;
                }
              
            }
        }
        return false;
    }
};
int main()
{
  vector<int>arr;
  arr.push_back(10);
  arr.push_back(2);
  arr.push_back(5);
  arr.push_back(3);
    Solution z;
    z.checkIfExist(arr);
  if(z.checkIfExist(arr)){
  cout<<"True"<<endl;
  }
  else{
    cout<<"false";
  }
  return 0;
}