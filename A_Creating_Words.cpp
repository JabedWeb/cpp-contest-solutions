////https://codeforces.com/contest/1985/problem/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    swap(s1[0],s2[0]);
    cout <<s1 << " " << s2 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      solve();
    }
}
