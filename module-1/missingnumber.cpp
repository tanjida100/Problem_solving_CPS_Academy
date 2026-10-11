#include<iostream>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
     }
      int sum1=0;
    for(int i=1;i<=n;i++)
    {

        sum1=sum1+i;
    }
    int sum2=0;
    for(int i=0;i<n-1;i++)
    {

        sum2=sum2+arr[i];
    }
    int total_sum=sum1-sum2;
    cout<<total_sum;*/

    //another type:
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
     }
     int sum2=0;
    for(int i=0;i<n-1;i++)
    {

        sum2=sum2+arr[i];
    }
    int sum1=n*(n+1)/2;
    int total_sum=sum1-sum2;
    cout<<total_sum;



}
