#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000001];
    cin>>str;
    int cnt[26]={0};
    int ln=0;
    for(int i=0;str[i] != '\0';i++)
    {
        cnt[str[i]-'A']++;
        ln++;
    }
    int oddcount=0;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]%2 == 1)
        {
            oddcount++;
        }
    }
    if(oddcount>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    int id=0;
    for(int letter=0;letter<26;letter++)
    {
        while(cnt[letter]>=2)
        {
            cnt[letter]-=2;
            str[id] = 'A'+letter;
            str[ln-1-id]='A'+letter;
            id++;
        }
    }
    for(int letter=0;letter<26;letter++)
    {
        if(cnt[letter])
        {
            str[id]='A'+letter;
        }
    }
    cout<<str<<endl;
}
