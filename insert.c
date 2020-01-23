#include<stdio.h>
struct Node
{
int val;
struct Node *next;
};
struct Node *head=NULL;
void insertBegin(int data)
{
struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
newnode->val=data;
newnode->next=head;
head=newnode;
}
void insertLast(int data)
{
struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
newnode->val=data;
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
{
struct Node *ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
}
}
int main()
{
insertBegin(2);
insertBegin(3);
insertLast(4);
insertLast(5);
while(head!=NULL)
{
printf("%d ",head->val);
head=head->next;
}
return 0;
}
