#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        }
    
    }
void print(vector<char>& s){
  for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
  }
}
};
int main() {
  vector<char>s;
  s.push_back('h');
  s.push_back('e');
  s.push_back('l');
  s.push_back('l');
  s.push_back('o');
  Solution z;
  z.reverseString(s);
 z.print(s);
   
  return 0;
}