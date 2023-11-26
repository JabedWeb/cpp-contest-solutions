
///https://codeforces.com/problemset/problem/1864/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

string solve(string s, int k) {
    int n = s.size();
    if (k % 2 == 1) {
        string odd, even;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) even += s[i];
            else odd += s[i];
        }
     
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        int j=0,l=0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) s[i] = even[j++];
            else s[i] = odd[l++];
        }
    } else {
        sort(s.begin(), s.end());
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        cout << solve(s, k) << endl;
    }
    return 0;
}
