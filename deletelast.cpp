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
        node*temp= new node();
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
    
    void del(){
        if(head==0){
            return;
        }
        else if(head->next==0){
            delete head;
            head==0;
        }
        else{
            node*p=head;
            while(p->next->next!=0){
                p=p->next;
            }
            delete p->next;
            p->next=0;
        }
    }
    
    void display(){
        node*p=head;
        while(p!=0){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
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
    ob.del();
    ob.display();
    return 0;
}




