#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a=10;
    // int *p;
    // p=&a; //pointer a variable
    // cout<<"Using pointer: "<<*p<<endl; //deferencing
    // cout<<a<<endl;

    // printf("%d ",&a);
    // cout<<p;


//interesting:

    // int a[5]={2,4,6,8,10};
    // int *p;
    // p=a;// no need to have & as, the name of the variable is itself the starting index of the array

    // //Accesing array members using pointer
    // for (int i=0;i<5;i++)
    // {
    //     cout<<p[i]<<endl;
    // }



    // int *p;
    // p=(int *)malloc(5*sizeof(int));//creating memory in heap in C
    // p[0]=1;
    // p[1]=2;
    // p[2]=3;
    // p[3]=4;
    // p[4]=5;
    // for (int i=0;i<5;i++)
    //     cout<<p[i]<<endl;

    // for C++
    // int *p;
    // p= new int[5];
    // p[0]=1;
    // p[1]=2;
    // p[2]=3;
    // p[3]=4;
    // p[4]=5;

    // Releasing memory
    // free(p);//for C
    // delete [ ] p; //for c++

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    return 0;
}