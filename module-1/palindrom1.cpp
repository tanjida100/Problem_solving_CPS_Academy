#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char str[1001];
cin>>str;
int n= strlen(str);
bool found=true;
for(int i=0;i<n/2;i++)
{
    if(str[i] !=str[n-i-1])
    {
        found= false;
    }

}
if(found)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

}
