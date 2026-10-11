#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        bool ok=false;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
           if(x == 67)
            ok=true;

        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
