#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;

    }
    else{
        for(int odd=n;odd>=1;odd--)
    {
        if(odd%2 !=0)
        cout<<odd<<" ";
    }
    for(int even=n;even>=1;even--)
    {
        if(even%2 ==0)
        cout<<even<<" ";
    }
   cout<<endl;
    }

   return 0;
}
