// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main(){
    int val;
    queue<int>q1;
    queue<int>q2;
    for(int i=0;i<5;i++){
        cin>>val;
        q1.push(val);
    }
    q2=q1;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
    q1.pop();
    q1.pop();
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"Queue is empty";
}