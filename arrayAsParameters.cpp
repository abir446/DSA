#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

// void fun (int *a,int l)
// {
//     // for (int i=0;i<l;i++)
//     // {
//     //     cout<<a[i]<<endl;
//     // }
//     a[0]=20;

// }


// int main()
// {
//     int a[]={2,4,5,6,7};
//     int n=5;

//     fun(a,n);
//     for (int x:a)
//     {
//         cout<<x<<endl;
//     }
//     // cout<<sizeof(a)/sizeof(int)<<endl;

//     return 0;
// }

/* Returning an array from function which was created in the function */
int * fun(int size)
{
    int *p;
    p=(int *)malloc(size*sizeof(int));
    for (int i=0;i<size;i++)
    {
        p[i]=i+1;
    }

    return p;
}

int main()
{
    int *ptr,size=5;
    ptr=fun(size);

    for (int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }

    return 0;
}