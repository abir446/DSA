#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int &r=a;//Reference variable
    int b=39;
    r=b;
    cout<<r<<endl;
    a++;
    cout<<r<<endl;//as the value in the address of r(a) is changed, r is changed too



    return 0;
}