//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/1907/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int n, string s) {
    unordered_map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }

    int maxCount = 0;
    for (auto p : frequency) {
        maxCount = max(maxCount, p.second);
    }

    if (maxCount > n / 2) {
      //  cout << "maxCount: " << maxCount << endl;
        return 2 * maxCount - n;
    } else {
        cout << "maxCount else : " << maxCount << endl;
        return n % 2;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int minLength = solve(n, s);
        cout << minLength << endl;
    }

    return 0;
}