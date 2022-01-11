#include <iostream>
using namespace std;
int main()
{
    //Write and run a program that reads a six-digit integer and prints the sum of its six digits.
    int number=0;
    cout<<"Enter a six digit number: ";             
    cin>>number;
    int num1,num2,num3,num4,num5,num6;
    int ans1,ans2,ans3,ans4,ans5,ans6;
    num1=number%10;
    ans1=number/10;

    num2=ans1%10;
    ans2=ans1/10;

    num3=ans2%10;
    ans3=ans2/10;

    num4=ans3%10;
    ans4=ans3/10;

    num5=ans4%10;
    ans5=ans4/10;

    num6=ans5%10;
    ans6=ans5/10;

    int total=0;
    total=num1+num2+num3+num4+num5+num6;
    cout<<"Sum of these digits is: "<<total;



}
