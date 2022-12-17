#include<iostream>
using namespace std;
int main()
{
    long arr[100];
    int size=1, i=0, j=0;
    while(1){
        cin >> arr[i];
        if(cin.get()=='\n')
        break;
        i++;
        ++size;
    }
    while(j<size)
    {
        int k= arr[j];
        cout << arr[k] << " ";
        j++;
    }
}