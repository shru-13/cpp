// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
void add(node**head,int newdata)
{
    node*newnode= new node;
    newnode->data=newdata;
    newnode->next=*head;
    if(*head==0)
    {
        *head=newnode;
        newnode->next=*head;
    }
    else
    {
        node*temp=*head;
        while(temp->next!=*head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void deletenode(node**head)
{
    if(*head==0)
    {return;}
    if((*head)->next==*head)
    {
        delete *head;
        *head=0;
    }
    else{
        node*temp=*head;
        while(temp->next!=*head)
        {
            temp=temp->next;    
        }
        temp->next=(*head)->next;
        node*del=*head;
        *head=(*head)->next;
        delete del;
    }
}
void display(node*head)
{
    node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main()
{
    node*head=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=n-1;i>=0;i--)
    {
        cin>>a[i];
        add(&head,a[i]);
    }
    deletenode(&head);
    display(head);
}




