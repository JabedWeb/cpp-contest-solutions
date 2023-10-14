#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<pair<int, string>> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            b[i] = {x, s};
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < b[i].first; j++) {
                if (b[i].second[j] == 'D') {
                    a[i] = (a[i] + 1) % 10; 
                } else {
                    a[i] = (a[i] - 1+10) % 10;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

