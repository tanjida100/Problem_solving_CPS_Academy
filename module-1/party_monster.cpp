#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int open = 0, close = 0;

        for(int j = 0; j < s.size(); j++)
        {
            char c = s[j];

            if(c == '(') open++;
            else close++;
        }

        if(open == close)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
