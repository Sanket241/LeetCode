#include <iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;

        int badi=fib(n-1);
        int choti=fib(n-2);
        return badi + choti;
    }
};
int main() {
  int n=6;
Solution Obj;
  Obj.fib(n);
  cout<< Obj.fib(n);

      
  return 0;
}