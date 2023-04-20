#include<bits/stdc++.h>
using namespace std;

struct item{
    int profit, weight;
    item(int profit, int weight){
        this->profit=profit;
        this->weight=weight;
    }
}; 

static bool cmp(struct item a, struct item b){
    double r1=(double)a.profit/(double)a.weight;
    double r2=(double)b.profit/(double)b.weight;
    return r1>r2;
}

double frakna(int W, struct item a[], int n){
    sort(a, a+n, cmp);
    double finalvalue=0.0;
    for(int i=0;i<n;i++){
        if(a[i].weight<=W){
            W=W-a[i].weight;
            finalvalue=finalvalue+a[i].profit;
        }
        else{
            finalvalue=finalvalue+a[i].profit*((double)W/(double)a[i].weight);
            break;
        }
    }
    return finalvalue;
}

int main(){
    int W=80;
    item a[]={{60,10},{100,20},{120,30},{200,2},{30,90}};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<frakna(W,a,n);
    return 0;
}