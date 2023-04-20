#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void perm(string s){
    int n=s.length();
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
}

int main(){
    string s;
    cin>>s;
    perm(s);
    return 0;
}