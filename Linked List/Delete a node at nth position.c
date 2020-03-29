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
// Delete node at given position
void Delete(int pos){
struct Node* temp1=head;
if(pos==1)
{
    head=temp1->next;
    free(temp1);
    return;
    int i;
    for(i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
    struct Node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
}
int main()
{
head=NULL;
insert(2);
insert(4);
insert(6);
insert(5);
print();
int n;
printf("Enter a Position\n");
scanf("%d",&n);
Delete(n);
print();
}
