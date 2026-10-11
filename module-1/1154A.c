
#include<iostream>
using namespace std;
int main()
{
    int s,x,y,z,a,b,c;
    cin>>s>>x>>y>>z;
    int sum1,sum2,sum3,sum4;

    if(s>x && s>y && s>z)
    {
         sum1=s;
         sum2=x;
         sum3=y;
         sum4=z;
    }
    else if(x>s && x>y && x>z)
    {
        sum1=x;
         sum2=s;
         sum3=y;
         sum4=z;
    }
    else if(y>x && y>s && y>z)
    {
        sum1=y;
         sum2=x;
         sum3=s;
         sum4=z;
    }
    else
    {
        sum1=z;
         sum2=x;
         sum3=y;
         sum4=s;

    }
    a=(sum1)-(sum2);
    b=(sum1)-(sum3);
    c=(sum1)-(sum4);
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;


}
