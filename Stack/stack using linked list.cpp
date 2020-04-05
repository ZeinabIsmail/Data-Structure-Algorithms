#include <iostream>

using namespace std;

struct Node{
int data;
Node* next;
};

class Stack{
 Node* top;

 public:
     Stack(){
 top=NULL;
 }
     void push(int x){
     Node* temp= new Node();
     temp->data=x;
     temp->next=top;
     top=temp;
     }
     void pop(){
     if(top==NULL)
        return;
     Node* temp=new Node();
     temp=top;
     top=top->next;
     delete temp;
     }
     bool IsEmpty(){
     if (top==NULL)
        return true;
     else
        return false;
     }
     int Top(){
     return top->data;
     }
};
int main(){
Stack s;
s.push(50);
s.push(5);
s.push(10);
s.pop();
int x=s.Top();
cout<<x;
return 0;}
