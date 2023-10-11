#include <iostream>
#include<stack>
using namespace std;

class SortedStack{
public:
stack<int>s;
void sort();
};
void printStack(stack<int>s){
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();  
  }
  cout<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    SortedStack *ss=new SortedStack();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      ss->s.push(x);
    }
    ss->sort();
    printStack(ss->s);
}
}




void addNumber(stack<int>&st,int n){
    if(st.empty() || n > st.top() ){
        st.push(n);
        return;
    }
    int ans=st.top();
    st.pop();
    
    addNumber(st,n);
    st.push(ans);
}
void SortedStack :: sort()
{
   //Your code here
   if(s.empty()){
       return;
   }
   int num=s.top();
   s.pop();
   
   sort();
   addNumber(s,num);
}