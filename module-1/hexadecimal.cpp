#include<iostream>
using  namespace std;
int main()
{
    char x[10];
    cin>>x;
    for(int i=0; x[i] !='\0';i++)
    {
        int d = x[i] - '0';
        if(x[i]>='5' && x[i]<= '9')
        {  if (i==0 && x[i]=='9')
        {
            continue;
        }
          d = 9-d;
          x[i] = '0'+d;
        }
    }
    cout<<x;
    return 0;
}
