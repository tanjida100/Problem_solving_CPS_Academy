#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> array(n);

        int count_zero = 0, count_negative = 0;

        for (int j = 0; j < n; j++) {
            cin >> array[j];
            if (array[j] == 0)
                count_zero++;
            else if (array[j] == -1)
                count_negative++;
        }

        int ans = count_zero;
        if (count_negative % 2 == 1) {
            ans += 2;
        }

        cout << ans << "\n";
    }

    return 0;
}
