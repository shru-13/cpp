#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node*next;
  
  node(int value){
      data=value;
      next=0;
  }
};

class list{
    public:
    node*head;
    
    list(){
        head=0;
    }
    
   void insert(int value){
       node*newnode= new node(value);
       
       if(head==0){
           head=newnode;
           return;
       }
       
       node*curr=head;
       
       while(curr->next!=0){
           curr=curr->next;
       }
       curr->next=newnode;
   } 
   
   bool search(int key){
       node*curr=head;
       
       while(curr!=0){
           if(curr->data==key){
               return true;
           }
           
           curr=curr->next;
       }
       return false;
   }    
};

int main(){
    list ob;
    
    int value,key;
    cin>>value;
    while(value>0){
        cin>>value;
        ob.insert(value);
    }
    
    cin>>key;
    if(ob.search(key)){
        cout<<key<<" is present in the list"<<endl;
    }
    else
    cout<<key<<" is not present in the list"<<endl;
    
    return 0;
}














