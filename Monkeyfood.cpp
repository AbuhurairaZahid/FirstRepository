#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter dimensions: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Data for Monkey "<<i+1<<endl;
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //For average.
    float total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            total+=arr[i][j];
        }
    }
    float average;
    average=total/15;
    cout<<"Average amount of food eaten by monkeys is: "<<average<<endl;

    //Greatest amount of food.
    int tempg=arr[0][0];
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]>tempg)
            {
                tempg=arr[i][j];
                
            }
            
        }
    }
     cout<<"Greatest amount of food is: "<<tempg<<endl;


     //least amount of food.
    int temps=arr[0][0];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]<temps)
            {
                temps=arr[i][j];
                
            }
            
        }
    }
     cout<<"Least amount of food is: "<<temps<<endl;


    
}