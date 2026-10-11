#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,n,cost;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;

        cost=3^(n+1) + n*3^(n-1);
        cout<<cost<<endl;
    }
}
