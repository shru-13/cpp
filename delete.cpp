// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node*prev;
    node*next;
};
void add(node**head,int newdata)
{
    node*newnode=new node;
    newnode->data=newdata;
    newnode->prev=0;
    newnode->next=*head;
    if(*head!=0)
    {
        (*head)->prev=newnode;
    }
    *head=newnode;
}
void deletenode(node**head)
{
    if(*head==0)
    {
        return;
    }
    node*temp=*head;
    *head=(*head)->next;
    if(*head!=0)
    {
        (*head)->prev=0;
    }
    delete temp;
}
void display(node*no)
{
    while(no!=0)
    {
        cout<<no->data<<" ";
        no=no->next;
    }
    cout<<endl;
}
int main()
{
    node*head=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=n-1;j>=0;j--)
    {
        add(&head,a[j]);
    }
    deletenode(&head);
    display(head);
    return 0;
}
    

