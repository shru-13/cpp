// You are using GCC
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

class ll{
    node*head;
    public:
    ll(){
        head=0;
    }
    
    void insert(int val){
        node*temp=new node();
        temp->data=val;
        temp->next=0;
        
        if(head==0){
            head=temp;
        }
        else{
            node*p=head;
            while(p->next!=0){
                p=p->next;
            }
            p->next=temp;
        }
    }
    
    void print(int n){
        node*p=head;
        int c=1;
        while(p!=0){
            if(c==n){
                cout<<p->data;
                return;
            }
            c++;
            p=p->next;
        }
    }
};

int main(){
    ll ob;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        ob.insert(val);
    }
    int ch;
    cin>>ch;
    ob.print(ch);
    return 0;
}





