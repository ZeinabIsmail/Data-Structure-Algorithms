#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node* next;
};  //create a node
struct Node* head; //creation of pointer to head of linked list
void insert(int data, int n){ //Insertion of node at the nth position of the list
struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
temp1 ->data =data;
temp1 ->next =NULL;
if(n==1){
    temp1-> next=head;
    head=temp1;
    return;
}
struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
temp2=head;
for(int i=0;i<n-2;i++){
    temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
}
void print(){
struct Node* temp=head;
while (temp!= NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
}
int main()
{
    head= NULL ; //empty list
    printf("How many numbers?\n");
    int n,i,x,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" Enter the data\n");
        scanf("%d",&x);
        printf("Enter the position\n");
        scanf("%d",&pos);
        insert(x,pos);
        print();
    }
        return 0;
}

