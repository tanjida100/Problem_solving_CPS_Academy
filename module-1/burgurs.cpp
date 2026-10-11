#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int b, p, c, ph, pc, profit = 0;

        cin >> b >> p >> c;
        cin >> ph >> pc;

        if(b < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            int burger = b / 2;

            if(burger >= p + c)
            {
                profit = (p * ph) + (c * pc);
            }
            else
            {
                if(ph > pc)
                {
                    profit = (min(burger, p) * ph);

                    burger = burger - min(burger, p);

                    profit = profit + (min(burger, c) * pc);
                }
                else
                {
                    profit = (min(burger, c) * pc);

                    burger = burger - min(burger, c);

                    profit = profit + (min(burger, p) * ph);
                }
            }

            cout << profit << endl;
        }
    }

    return 0;
}
