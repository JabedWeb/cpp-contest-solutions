////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{

    int n; cin >> n;

    int count = 0;
    while (n % 6 == 0)
    {
        n /= 6;
        count++;
    }

    while (n % 3 == 0)
    {

        n /= 3;
        count = count + 2;
    }
    if (n == 1)
        cout << count << endl;
    else
        cout << "-1" << endl;
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
