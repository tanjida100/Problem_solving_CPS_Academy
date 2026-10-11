#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        bool tune=false;
        int n;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>arr[j];
            if(arr[2]>arr[4] && arr[j]<arr[j+1])

             tune=true;
        }

            if(tune)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

    }
}
