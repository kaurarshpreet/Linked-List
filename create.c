#include<stdio.h>
struct Node
{
int val;
struct Node *next;
};
void insert(struct Node *head)
{
struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
newnode->data=val;
newnode->next=NULL;
if(head==NULL)
head=newnode;
else 
{
struct Node *ptr=head;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=newnode;
}
}
int main()
{
struct Node *head=NULL;
insert(head,1);
insert(head,2);
insert(head,3);
insert(head,4);
}
