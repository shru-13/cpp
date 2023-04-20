#include<iostream>
#include<algorithm>
using namespace std;
int lis(int a[], int n){
    int lis[n];
    lis[0]=1;
    for(int i=1;i<n;i++){
        lis[i]=1;
        for(int j=0;j<i;j++){ //to compare
            if(a[i]>a[j] && lis[i]<lis[j]+1)
            lis[i]=lis[j]+1;
        }
    }
    return *max_element(lis,lis+n);
}

int main(){
   int a[20];
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   cout<<"Longest increasing subsequence: "<<lis(a,n);
   return 0;
}