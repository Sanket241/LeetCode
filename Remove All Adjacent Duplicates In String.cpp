#include <iostream>
using namespace std;class Solution {
public:
    string removeDuplicates(string s) {
        string temp="";
        int i=0;
        while(i<s.size()){
          if(temp.empty() || s[i] != temp.back())  {
              temp.push_back(s[i]);
          }
          else{
              temp.pop_back();
        }
        i++;
          }
        

        return temp;
    }
};
int main() {
 string s = "abbaca";
  Solution z;
  z.removeDuplicates(s);
   cout<<z.removeDuplicates(s);
 
  return 0;
}