// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <math.h>
using namespace std;

class Node {
public:
   int data;
   Node* next;
   Node(int data){
       this -> data = data;
       this -> next = NULL;
   }
};
void insert(Node* &head,int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int  getDecimalValue(Node* &head) {
        vector<int>arr;
        int count = 0;
        Node* temp = head;
        while(temp != NULL){
            int ans = temp -> data;
            arr.push_back(ans);
            count++;
            temp = temp -> next;
        }
        long long int  ans = 0;
        for(int i=count-1; i>=0; i--){
            ans=ans+(arr[i]*pow(2,count-i-1) );
        }

return ans;
    }
int main() {
    Node* node1 = new Node(1);
    Node *head = node1;
    insert(head,0);
    insert(head,1);
    int val = getDecimalValue(head);
    cout<<val;
    
    

    return 0;
}