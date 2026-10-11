
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<=n;b++)
        {
            for(int c=b;c<=n;c++)
            {
                if(a*a+b*b==c*c)
                {
                    cnt++;
                }
            }
        }

    }
  cout<<cnt<<endl;
  return 0;
  //in this code n^3 porjontw chole and we get 10^4*3 which cz time limit excceded.


}*/
#include<iostream>
using namespace std;
bool isperfectsqr[100000001];
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<=n;i++)
    {
        isperfectsqr[i*i]= true;
    }
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<=n;b++)
        { int csq=a*a+b*b;
                if(csq<=n*n && isperfectsqr[csq])
                {
                    cnt++;
                }

        }

    }
    cout<<cnt<<endl;
   return 0;
}
