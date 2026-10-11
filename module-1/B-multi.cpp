#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int count = 0;

        for(int j = 0; j < n; j++)
        {
            int s;
            cin >> s;

            if(s % 2 != 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}
//in this case when you take count outside loop but the work flow is happen inside loop then every time count is print as 1 that mean it cannot update
//so it will print multiple time as 1 but if you take it inside the loop then evry time it reset and print the final value for eac
