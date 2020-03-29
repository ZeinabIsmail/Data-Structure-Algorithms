#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node* next;
};  //create a node
struct Node* head; //creation of pointer to head of linked list
void insert(int x){ //Insertion of node at the begin of the list
struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
temp ->data = x;
temp ->next = head;
head = temp;
}
int main()
{
    head= NULL ; //empty list
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" Enter the data\n");
        scanf("%d",&x);
        insert(x);
    }
        return 0;
}
