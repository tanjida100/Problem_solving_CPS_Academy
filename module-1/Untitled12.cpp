#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long long n, a, b, r;

    for(int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;

        r = 0;


        r += (n / 3) * min(3 * a, b);


        int rem = n % 3;

        if(rem == 1)
        {
            r += min(a, b);
        }
        else if(rem == 2)
        {
            r += min(2 * a, b);
        }

        cout << r << endl;
    }

    return 0;
}
