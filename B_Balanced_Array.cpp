#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;cin >> n;
        if (n % 4 != 0) {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl;

            int sumEven = 0;
            for (int i = 1; i <= n / 2; i++) {
                cout << 2 * i << " ";
                sumEven += 2 * i;
            }

            int sumOdd = 0;
            for (int i = 1; i < n / 2; i++) {
                cout << 2 * i - 1 << " ";
                sumOdd += 2 * i - 1;
            }
            
            cout << sumEven - sumOdd << endl;
        }
    }
    return 0;
}
