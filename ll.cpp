// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
int main()
{
    node*head=0;
    node*tail=0;
    int n,val;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        cin>>val;
        node*temp=new node;
        temp->data=val;
        temp->next=0;
        if(head==0)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
        }
    }
    node*curr=head;
    int a[n];
    int j=0;
    while(curr!=0)
    {
        a[j]=curr->data;
        curr=curr->next;
        j++;
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}