#include<iostream>
using namespace std;
int main()
{
    int t,k,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>k>>y;
        for(int j=0;j<k;j++){
          if((y-1)%3==0 && ((y-1)/3)%2==1)
             y=(y-1)/3;
          else
             y=2*y;

        }
       cout<< y <<endl;

    }


}
