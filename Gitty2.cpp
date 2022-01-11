#include <iostream>
using namespace std;
int main()
{
    //Write and run a program that reads two integers and then uses the conditional expression operator to
    //print either “multiple” or “not” according to whether one of the integers is a multiple of the other.
   int num1=0;
   int num2=0;
   cout<<"Enter number 1: ";
   cin>>num1;
   cout<<"Enter number 2: ";
   cin>>num2;
   if(num1%num2==0 || num2%num1==0)
   {
       cout<<"Yes its a multiple"; 
   }
   else
   cout<<"No, its not a multipe";
}