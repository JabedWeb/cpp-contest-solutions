
////https://codeforces.com/contest/1585/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int count = 0;
        int current = a[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > current) {
                current = a[i];
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
