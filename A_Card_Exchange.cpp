////https://codeforces.com/contest/1966/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> cards(n);
    map<int, int> count;

    for (int i = 0; i < n; ++i) cin >> cards[i];
    for (int c : cards) count[c]++;

    vector<pair<int, int>> counts(count.begin(), count.end());

    sort(counts.begin(), counts.end(), compare);
    int ans = n;
    if (counts[0].second >= k ) ans = k - 1;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
