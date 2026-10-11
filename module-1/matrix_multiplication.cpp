#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[m];
    int matrix[n][m];


    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int j = 0; j < m; j++) {
        cin >> arr[j];
    }


    for (int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {

            sum = sum + matrix[i][j] * arr[j];
        }
        cout << sum << endl;
    }

    return 0;
}

