#include<iostream>
#include<string.h>
using namespace std;
int lcs(char*x, char*y, int m, int n){
    int lcs[m+1][n+1];
    int res=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                lcs[i][j]=0;
            }
            else if(x[i-1]==y[j-1]){
              lcs[i][j]=lcs[i-1][j-1]+1;//checking previous value and adding 1
              res=max(res,lcs[i][j]);
            }
            else
            lcs[i][j]=0;
        }
    }
    return res;
}

int main(){
    char x[10];
    char y[10];
    cin >> x >> y;
    int m= strlen(x);
    int n= strlen(y);
    cout<<"Length of Longest Common Substring: "<<lcs(x,y,m,n);
    return 0;
}