#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node* next;
};  //create a node
struct Node* head; //creation of pointer to head of linked list ( Global Variable )
 //Insertion of node at the begin of the list
void insert(int x){
struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
temp ->data = x;
temp ->next = head;
head = temp;
}
// Print list items
void print(){
struct Node* temp=head;
while (temp!= NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
// Reverse the linked list
void Reverse(){
struct Node *current,*next,*prev;
current=head;
prev=NULL;
while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
}

int main()
{
head=NULL;
insert(2);
insert(4);
insert(6);
insert(5);
print();
Reverse();
print();
}
