
#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    for(int i=year;i>year;i++)
    {
        int a= year/1000;
        int b= (year/100)%10;
        int c=(year/10)%10;
        int d=year%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        cout<<a;
        cout<<b;
        cout<<c;
        cout<<d;

    }
    return 0;

}
