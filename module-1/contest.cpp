#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, a, b;
        cin >> n >> a >> b;

        int totalCost;

        if (b < 2 * a) {

            int pairs = n / 2;
            int singles = n % 2;
            totalCost = pairs * b + singles * a;
        } else {

            totalCost = n * a;
        }

        cout << totalCost << endl;
    }

    return 0;
}

