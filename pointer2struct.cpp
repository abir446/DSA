#include <stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    // Rectangle r={10,5};
    // // cout<<r.length;
    // Rectangle *p=&r;
    // cout<<p->length<<endl;

    struct Rectangle *p;
    //create object in heap
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;
    cout<<p->length<<endl;

    return 0;
}