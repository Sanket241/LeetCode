#include<iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=0;
        int e=num;
        while(s<=e){
          long long int mid=s+(e-s)/2;
         long long int sqr=mid*mid;
            if(sqr == num){
                return 1;
            }
            else if(sqr > num){
                e=mid-1;
            }
            else if(sqr < num){
                s=mid+1;
            }
        }
        return 0;
    }
};

int main()
{
    Solution z;
    z.isPerfectSquare(16);

    if( z.isPerfectSquare(16)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}