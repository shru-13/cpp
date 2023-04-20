#include<bits/stdc++.h>
using namespace std;
void computelps(char*pat, int m, int *lps);

void kmp(char* pat, char* txt){
    int m=strlen(pat);
    int n=strlen(txt);
    int lps[m];
    computelps(pat,m,lps);
    int i=0;
    int j=0;
    while((n-i)>=(m-j)){
        if(pat[j]==txt[i]){
            j++;
            i++;
        }
        if(j==m){
            cout <<"Found pattern at index "<<i-j<< endl;
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i]){
            if(j!=0)
            j=lps[j-1];
            else
            i=i+1;
        }
    }
}
void computelps(char*pat, int m, int* lps){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<m){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
              len=lps[len-1];  
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

int main(){
    char txt[30];
    char pat[30];
    cin>>pat>>txt;
    kmp(pat, txt);
    return 0;
}