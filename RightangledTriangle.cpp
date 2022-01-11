#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    /*Write a program which takes as input 3 points and tell whether these points are the coordinates of right
angled or scalene triangle.*/
int x1,y1,x2,y2,x3,y3;
cout<<"Enter the 1st co-ordinates: ";
cin>>x1;
cin>>y1;
cout<<"\nEnter the 2nd co-ordinates: ";
cin>>x2;
cin>>y2;
cout<<"\nEnter the 3rd Co-ordinates: ";
cin>>x3;
cin>>y3;
int side1,side2,side3;
side1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
side2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
side3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

if(side1==(side2+side3) || (side2)==(side1+side3) || (side3)==(side1+side2))
{
    cout<<"Its a Right Angled Triangle.";
}
else
cout<<"Its a Scalene Triangle.";
}