#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,r,s;
    cin>>n>>t>>a;
    r=n-t;
    s=n-a;
    if(n%2 !=0 && a>r)
    {
       cout<<"yes"<<endl;}

    else if(n%2!=0 && t>s)
            {cout<<"yes"<<endl;}


    else{cout<<"no"<<endl;}

}
