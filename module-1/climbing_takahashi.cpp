#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];

    }
    int i;
    for( i=1;i<t;i++)
    {
        if(arr[i]<=arr[i-1])
              break;

     }
     cout<<arr[i-1];

}
