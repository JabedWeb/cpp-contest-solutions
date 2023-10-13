#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;

    while (t--) {
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (x.find(s) != string::npos) {
            cout << 0 << endl;
            continue;
        }

        if (x.size() > s.size()) {
            x = x + x;
            if (x.find(s) != string::npos) {
                cout << 1 << endl;
            } else {
                cout << -1 << endl;
            }
            continue;
        }

        int operations = 0;
        while (x.size() <= 2 * s.size()) {
            x = x + x;
            operations++;

            if (x.find(s) != string::npos) {
                break;
            }
        }

        if (x.find(s) != string::npos) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
