////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string str;
    cin >> str;
    int current = m-1;
    int wasted = 0;
    int countFailed = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if ( str[i] == 'L')
        {
            current = m;
        }
        else if (str[i] == 'W')
        {
            if (current <= 0) wasted++;
        }
        else
        {
            if (current <= 0) countFailed++;
        }
        current--;
    }

    if (wasted > k)
        countFailed++;

    if(countFailed<=0){
        cout <<"YES" <<endl;
    }
    else cout <<"NO" <<endl;
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
