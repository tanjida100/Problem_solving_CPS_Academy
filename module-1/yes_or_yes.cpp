#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string ch;
        cin>>ch;
        if(ch == "YES" || ch == "YeS" || ch == "yES" || ch == "Yes" || ch == "yes" || ch == "yEs"
          || ch == "YEs" || ch== "yeS"  )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
