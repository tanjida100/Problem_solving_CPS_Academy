#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        if (n % 2 != 0) {
            cout << 0 << endl;
        } else {
            int res = (n / 4) + 1;
            cout << res << endl;
        }
    }

    return 0;
}
