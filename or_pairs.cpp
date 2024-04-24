#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        unordered_set<int> b_set(b.begin(), b.end());
        unordered_map<int, ll> or_map;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j) {
                int or_result = a[i] | a[j];
                or_map[or_result]++;
            }
        }

        ll ans = 0;
        for (int or_result : b_set) {
            if (or_map.find(or_result) != or_map.end()) {
                ans += or_map[or_result];
            }
        }

        cout << ans*2 << endl;
    }
    return 0;
}
