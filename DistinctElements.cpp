#include <iostream>
using namespace std;

int main()
{
    int arr[20]={0};
    int distinct[20]={0};
    int size=20;
    int counter=0;
    cout<<"Enter Twenty Integers and press -99 to terminate the progamme: ";
    for(int i=0;i<19;i++)
    {
        cin>>arr[i];
        
    }
    for(int j=0;j<20;j++)
    {
        distinct[j]=arr[j];
    }
    for(int k=0;k<size;k++)
    {
        for(int l=k+1;k<size;l++)
        {
            if(distinct[k]==distinct[l])
            {
                counter++;
            }
            if(counter>1)
        {
            distinct[k]=0;
        }
        }
        
    }
    for(int z=0;z<20;z++)
    {
        cout<<distinct[z];
    }
}