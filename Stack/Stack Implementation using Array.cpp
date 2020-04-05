#include <iostream>

using namespace std;
#define MAX_SIZE 1000
class Stack{
int A[MAX_SIZE];
int top;
public:
    Stack(){
    //Constructor to make empty stack
    top=-1;
    }
    // push operation into stack
    void push(int x){
    if(top == MAX_SIZE -1) { // overflow case.
			cout<<"Error: stack overflow\n";
			return;
		}
    A[++top]=x;
    }
    // pop operation from stack
    void pop(){
    if(top==-1){
        cout<<"The Stack is empty\n";
        return;
    }
    top--;
    }
    // Return the top of stack
    int Top(){
    return A[top];
    }
    // check if the stack is empty
    bool IsEmpty(){
    if (top==-1)
        return true;
    else
        return false;
    }
    // print function just for testing 
    void Print(){
    cout<<"Stack : ";
    for (int i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    }

};

int main(){
    Stack S;
	S.push(2);S.Print();
	S.push(5);S.Print();
	S.push(10);S.Print();
	S.pop();S.Print();
	S.push(12);S.Print();



return 0;}
