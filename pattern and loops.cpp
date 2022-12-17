// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    cin>>a;
    if(a%2!=0)
    {
        for(i=0;i<a;i++)
        {
            if(i==1){
                cout<<"0"<< endl;
            }
            else{
                for(j=1;j<=i;j++)
                {
                    if(j%2!=0)
                    {
                        cout<<"1";
                    }
                    else{
                        cout<<"0";
                    }
                }
                cout<<"\n";
            }
        }
    }
    else{
        for(i=1;i<=a;i++)
        {
            if(i%2!=0)
            {
                for(j=1;j<=(i/2)+1;j++)
                {
                    cout<<"1";
                }
                cout<<"\n";
            }
            else{
                for(j=1;j<=(i/2)+1;j++)
                {
                    cout<<"0";
                }
                cout<<"\n";
            }
            
        }
    }
}