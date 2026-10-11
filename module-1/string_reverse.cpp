#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[1000001];

    cin >> str;

    int n = strlen(str);
     for(int i=0;i<n/2;i++)
     {
         char c=str[n-i-1];//ekahen chaile tw ami n-1 o dite partam but i deoar reason amake sob ghor a jete hbe orthat sudu n-1 dile tw sudhu last er tai pabo always.
         str[n-i-1]=str[i];
         str[i]=c;
    }
      cout<<str<<endl;
    return 0;
}
