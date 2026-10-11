#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int x[101], y[101];

    for(int i=1; i<=t; i++)
    {
        cin >> x[i] >> y[i];
    }

    int max_distance = 0;

    for(int i=1; i<=t; i++)
    {
        for(int j=1; j<=t; j++)
        {
            int sq_distance =
            ((x[i]-x[j]) * (x[i]-x[j]))
            +
            ((y[i]-y[j]) * (y[i]-y[j]));

            max_distance = max(max_distance, sq_distance);
        }
    }

    double ans = sqrt(max_distance);

    cout << fixed << setprecision(8) << ans << endl;

    return 0;
}
