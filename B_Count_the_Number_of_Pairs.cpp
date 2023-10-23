#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--) {
    int n, k;cin >> n >> k;
    string s;cin >> s;
    vector<int> lowercase(26), uppercase(26);

    for(char c : s) {
        if(c >= 'a' && c <= 'z') lowercase[c - 97]++;
        else uppercase[c - 65]++;
    }

    int ans = 0;
    for(int i = 0; i < 26; i++) {
        int pairs = min(lowercase[i], uppercase[i]);
        ans += pairs;
        lowercase[i] -= pairs;
        uppercase[i] -= pairs;

        if(k > 0) {
            int remainingPair=max(lowercase[i], uppercase[i]) / 2;
            int sameCharPairs = min(k, remainingPair);
            ans += sameCharPairs;
            k -= sameCharPairs;
        }
    }

    cout << ans << endl;
    }
}
