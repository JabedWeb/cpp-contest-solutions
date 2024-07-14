////https://codeforces.com/contest/102/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    string s;
    cin >> s;
    int count = 0;

    while (s.size() > 1)
    {
        ll sum = 0;
        for (char c : s)
        {
            sum += c - '0';
        }
        count++;

        s = to_string(sum);
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
