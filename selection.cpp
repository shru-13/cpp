#include<bits/stdc++.h>
using namespace std;
#define MAXM 20

struct act{
    char n[10];
    int start, finish;
};

bool sorta(act a1, act a2){
    return a1.finish<a2.finish;
}

void print(act a[], int n){
    sort(a,a+n, sorta);
    int i=0;
    cout<<"Selected Activities are:"<<endl;
    cout<<a[i].n<<" ";
    for(int j=i;j<n;j++){
        if(a[j].start>=a[i].finish){
            cout<<a[j].n<<" ";
            i=j;
        }
    }
}

int main(){
    int n;
    cin>>n;
    act a[MAXM];
    for(int i=0;i<n;i++){
        cin>>a[i].n>>a[i].start>>a[i].finish;
    }
    print(a,n);
    return 0;
}