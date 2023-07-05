#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void init(struct Rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

int area(struct Rectangle r){
    return r.length*r.breadth;
}
int peri(struct Rectangle r){
    int p=2*(r.length+r.breadth);
    return p;
}

int main(){
    int l=0,b=0;
    struct Rectangle r={0,0};
    printf("Enter length and breadth: ");
    scanf("%d%d",&l,&b);
    init(&r,l,b);
    int p=peri(r);
    int a=area(r);

    cout<<"Area: "<<a<<endl<<"Perimeter: "<<p<<endl;

    return 0;
}