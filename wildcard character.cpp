#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,s=0;
    char a[50], b[50];
    cin>>a;
    cin>>b;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]!=b[i])
        {
            if((a[i]!=63)&&(b[i]!=63))
            s=1;
            break;
        }
    }

if(s==0)
{
    cout<<"Yes";
}
else
{
    cout<<"No";
}
return 0;
}