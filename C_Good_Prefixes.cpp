#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll t, m, n, o, p;

    cin >> t;

    while (t--) {
        cin >> m;

        ll a[m], b[m];

        for (int i = 0; i < m; i++) {
            cin >> a[i];

            if (i == 0) {
                b[0] = a[0];
                continue;
            } else
                b[i] = a[i] + b[i - 1];
        }

        int count = 0, max = a[0], sum = 0;

        for (int i = 0; i < m; i++) {
            if (i == 0 && a[0] == 0) {
                count++;
                continue;
            }

            if (a[i] > max) {
                max = a[i];
            }

            if (max == b[i] - max) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
