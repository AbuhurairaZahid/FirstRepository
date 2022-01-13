#include <iostream>
using namespace std;
int namesearcher(char namearr[][30],char name[][30])
{
    int n;
    for(int i=0;i<5;i++)
    {
        if(name[i]==namearr[i])
        {
            n=i;

             
        }
        
    }
    return n;
}
int main()
{
    char namearr[5][30]={'0'};
    char numberarr[5][12]={'0'};
    cout<<"Enter Five names: ";
    for(int i=0;i<5;i++)
    {
        cin.getline(namearr[i],30);
    }
    cout<<"\nEnter a 11 digit contact number for five persons: ";
    for(int i=0;i<5;i++)
    {
        cin.getline(numberarr[i],12);
    }
    
    char name[1][30];
    cout<<"Enter the name you want to search: ";
    cin.getline(name[1],30);
    namesearcher(namearr,name);
    cout<<"Your Searched Name has a number: ";
    int f=namesearcher(namearr,name);
    for(int i=0;i<12;i++)
    cout<<numberarr[f][i];
}