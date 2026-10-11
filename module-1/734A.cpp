#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

         string s,prev;

    for(int i=0;i<n;i++)
    {
        int countA;
        cin>>s;


        if(s==prev)
        {
            countA++;
            cout<<s<<countA<<endl;
        }

        else
        {
            cout<<"ok"<<endl;
            countA=0;
            prev=s;
        }

      }



}
