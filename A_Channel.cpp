#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, a, q; cin >> n >> a >> q;
        string s; cin >> s;

        int online = a;
        int p = count(s.begin(), s.end(), '+');

        if(n==a){
            cout<<"YES"<<endl;
            continue;
        }
        if (online + p < n) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+') {
                online++;
            } else {
                online--;
            }

            if (online == n) {
                cout << "YES" << endl;
                break;
            }
        }
        if (online != n) {
            cout << "MAYBE" << endl;
        }
    }
}
