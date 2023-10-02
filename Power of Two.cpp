#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));

      
    }
};
int main() {
  int n=16;
Solution Obj;
  Obj.isPowerOfTwo(n);
  cout<< Obj.isPowerOfTwo(n);

      
  return 0;
}