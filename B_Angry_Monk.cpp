////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = n - a[k - 1];
    for (int i = 0; i < k - 1; i++)
    {
        ans += (a[i] - 1);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
