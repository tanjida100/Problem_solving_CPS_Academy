#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        vector<int> a_copy = a;
        vector<int> b_copy = b;

        for(int i=0;i<n;i++){
            if(a_copy[i]!=b_copy[i]){
                if((i+1)%2==1){

                    a_copy[i] = 1;
                    b_copy[i] = 0;
                } else {

                    a_copy[i] = 0;
                    b_copy[i] = 1;
                }
            }
        }

        int ajisai_xor = 0, mai_xor = 0;
        for(int i=0;i<n;i++){
            ajisai_xor ^= a_copy[i];
            mai_xor ^= b_copy[i];
        }

        if(ajisai_xor > mai_xor) cout << "Ajisai\n";
        else if(mai_xor > ajisai_xor) cout << "Mai\n";
        else cout << "Tie\n";
    }
}
