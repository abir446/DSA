#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


struct Rectangle
{
    int length;
    int breadth;
};


//Call by value
// void fun(struct Rectangle r)
// {
//     r.length=20;
//     cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;
// }

// //Call by address
// void fun(struct Rectangle *p)
// {
//     p->length=20;
//     cout<<"Length: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl;
// }

// int main()
// {
//     struct Rectangle r={10,5};
//     fun(&r);
//     printf("Length: %d\nBreadth: %d\n",r.length,r.breadth);
//     return 0;
// }

//Returning an address of a structure

struct Rectangle * fun()
{
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;
    return p;
}

int main()
{
    struct Rectangle *ptr=fun();
    cout<<"Length: "<<ptr->length<<endl<<"Breadth: "<<ptr->breadth<<endl;

    return 0;
}