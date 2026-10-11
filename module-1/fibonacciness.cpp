

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans;
    for(int i=0;i<n;i++)
    {
        int a1,a2,a4,a5;

        cin>>a1>>a2>>a4>>a5;
        int x1,x2,x3;
        x1=a1+a2;
        x2=a4-a2;
        x3=a5-a4;
        if(x1==x2 && x2==x3)
        {
             ans=3;
              cout<<ans<<endl;
        }


        else if(x1==x2 || x2==x3)
        {
             ans=2;
             cout<<ans<<endl;
        }

        else
          {
              ans=1;
              cout<<ans<<endl;
          }

    }


    return 0;
}
