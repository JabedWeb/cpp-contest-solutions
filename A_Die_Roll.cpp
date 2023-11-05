
////https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;


void solve(){
    int y,w; cin >> y >> w;
    int height = max(y,w);
    int favorable = 6-height+1;
    int gcd=__gcd(favorable,6);
    cout<<favorable/gcd<<"/"<<6/gcd<<endl;
}

int main() {
    solve();
}
