////https://codeforces.com/contest/1974/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int x, y;
    cin >> x >> y;

    int screens_two = (y + 1) / 2;

    int remaining_cells = screens_two * 15 - y * 4;

    int remaining_for_one = max(0, x - remaining_cells);

    int screens_one = (remaining_for_one + 14) / 15;

    cout << screens_two + screens_one << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      solve();
    }
}
