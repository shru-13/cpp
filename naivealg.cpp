#include<bits/stdc++.h>
using namespace std;

void naive(char*s2, char*s1){
    int m= strlen(s2);//pattern
    int n= strlen(s1);//text
    int j;
    for(int i=0;i<=n-m;i++){
        
        for(j=0;j<m;j++){
            if(s1[i+j]!=s2[j])
                break;
              }                       //inner loop ends here
            if(j==m)
                cout<<"Pattern found at index "<<i<<endl;
            
        }
    if(j!=m){
        cout<<"Not found";
    }
    }



int main(){
    char s1[20];
    char s2[20];
    cin>>s1>>s2;
    
   naive(s2,s1);
    return 0;

}