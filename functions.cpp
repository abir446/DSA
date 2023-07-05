#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{
    return (a+b);
}

int main()
{
    int n1=10,n2=15,sum=0;
    sum=add(n1,n2); // function calling
    cout<<sum<<endl;
    
    return 0;
}