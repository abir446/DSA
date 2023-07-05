// Understanding parameter passing method by a problem of swapping values:

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
int main()
{
    int n1=10,n2=20;
    swap(&n1,&n2);

    cout<<"NUM1: "<<n1<<endl;
    cout<<"NUM2: "<<n2<<endl;
    
    
    return 0;
}