#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,r1,r2,r3;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        r1=a+b;
        r2=a+c;
        r3=b+c;

        if(r1==c)
        {
            cout<<"YES"<<endl;
        }
        else if(r2==b)
        {
           cout<<"YES"<<endl;
        }
        else if(r3==a)
        {
           cout<<"YES"<<endl;
        }
        else
        {
         cout<<"NO"<<endl;
        }

    }
    return 0;
}
