#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int area(int l,int b){
    return l*b;
}
int peri(int l,int b){
    int p=2*(l+b);
    return p;
}

int main(){
    int length=0,breadth=0;
    printf("Enter length and breadth: ");
    scanf("%d%d",&length,&breadth);

    int a=area(length,breadth);
    int p=peri(length,breadth);

    cout<<"Area: "<<a<<endl<<"Perimeter: "<<p<<endl;

    return 0;
}