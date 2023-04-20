// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
void add(node**head,int newdata)
{
    node*newnode=new node;
    newnode->data=newdata;
    newnode->prev=nullptr;
    newnode->next=*head;
    if(*head!=nullptr)
    {
        (*head)->prev=newnode;
    }
    *head=newnode;
}
void forward(node*no)
{
    cout<<"Doubly linked list forwards: ";
    while(no!=nullptr)
    {
        cout<<no->data<<" ";
        no=no->next;
    }
    cout<<endl;
}
void backward(node*no)
{
    cout<<"Doubly linked list backwards: ";
    while(no->next!=0)
    {
        no=no->next;
    }
    while(no!=0)
    {
        cout<<no->data<<" ";
        no=no->prev;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    node*head=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        add(&head,a[i]);
    }
    forward(head);
    backward(head);
    return 0;
}





