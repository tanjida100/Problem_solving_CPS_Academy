#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long t, k;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        long long sum = 0;
        cin >> t;

        for(int j = 0; j < t; j++)
        {
            cin >> k;
            sum += k;
        }

        long long result = sqrt(sum);

        if (sum == result * result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
