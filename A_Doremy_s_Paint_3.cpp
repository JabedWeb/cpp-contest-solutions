//https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        map<int, int> mp;
        vector<int> v(2);
        int x = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }
        if (mp.size() >= 3) {
            cout << "No" << endl;
            continue;;
        }
        if (mp.size() == 1) {
            cout << "Yes" << endl;
            continue;;
        }
        int i = 0;
        for (auto it : mp) {
            v[i++] = it.second;
        }
        abs(v[0] - v[1]) >= 2 ? cout << "No" : cout << "Yes";
        cout << endl;
    }
    return 0;
}
