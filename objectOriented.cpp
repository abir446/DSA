#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

void init(int l,int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

int peri(){
    int p=2*(length+breadth);
    return p;
}
};

int main(){
    Rectangle r;

    int l=0,b=0;
    printf("Enter length and breadth: ");
    scanf("%d%d",&l,&b);

    r.init(l,b);
    int p=r.peri();
    int a=r.area();

    cout<<"Area: "<<a<<endl<<"Perimeter: "<<p<<endl;

    return 0;
}