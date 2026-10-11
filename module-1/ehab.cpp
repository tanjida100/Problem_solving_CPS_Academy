#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j= n-1;j>=0;j--)
    {
        if(arr[j]<arr[j-1])
        cout<<" "<< arr[ j ];
        else
            cout<<" "<<arr[j-1];
    }
}
