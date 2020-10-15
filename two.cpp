#include<iostream>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    int m;
    cin>>m;
    long long int arr[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int n=m;
    
    //Transpose
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    
    
    //Reversing columns
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[n-1-i][j];
            arr[n-1-i][j]=temp;
        }
    }
    
        //Printing matrix
            for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    
    cout<<endl;
}
}