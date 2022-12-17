#include<iostream>
using namespace std;
int main()
{
    int a[100], count=1,i,j; 
    int size;
    cin>>size;
    
    for(i=1;i<size;i++)
    {
        for(j=0;j<i;j++)
        {
            cin>>a[i];
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(i==j)
        {
            count++;
        }
        
    }
    cout << "Distinct :" << count << endl;
}