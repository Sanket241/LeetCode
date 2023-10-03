#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        if(n<=0)    
            return false;
        if(n%4!=0)
            return false;

        return isPowerOfFour (n/4);
    }
};
int main() {
  int n=16;
Solution Obj;
  Obj.isPowerOfFour(n);
  cout<< Obj.isPowerOfFour(n);

      
  return 0;
}