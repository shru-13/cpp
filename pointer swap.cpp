#include <bits/stdc++.h>
using namespace std;
void swap(string *a, string*b)
{
    string swap;
    swap= *a;
    *a=*b;
    *b= swap;
}
int main()
{
    string a= "First";
    string b= "Second";
    swap(&a,&b);
    cout<<"First statement is now: "<<a<< endl;
    cout<<"Second statement is now: "<<b<< endl;
    return 0;
}