#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
         if(n==1)
            return true;
        if(n==0)    
            return false;
       
       return n%3==0 && isPowerOfThree(n/3);
       
    }
};
int main() {
  int n=16;
Solution Obj;
  Obj.isPowerOfThree(n);
  cout<< Obj.isPowerOfThree(n);

      
  return 0;
}