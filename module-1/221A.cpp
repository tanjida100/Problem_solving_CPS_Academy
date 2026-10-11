#include <iostream>
using namespace std;

int main() {
    int t, n, arr[10000];
    int k;

    cin >> t;

    for (int i = 0; i < t; i++) {

        cin >> n >> k;

        int sum = 0;

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        if (sum % 2 != 0) {
            cout << "YES" << endl;
        }
        else if (( n * k) % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
