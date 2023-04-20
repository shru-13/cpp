// You are using GCC
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q1;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        q1.push(val);
    }
    cout<<q1.front();
}