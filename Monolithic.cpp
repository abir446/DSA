#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;



int main(){

    int length=0,breadth=0;
    printf("Enter length and breadth: ");
    cin>>length>>breadth;

    int area=(length*breadth);
    int peri=2*(length+breadth);

    cout<<"Area: "<<area<<endl<<"Perimeter: "<<peri<<endl;


    return 0;
}