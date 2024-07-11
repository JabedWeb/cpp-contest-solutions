////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    vector <int > v(n);

    for(int i=0;i<n;i++) cin >>v[i];
    sort(v.begin(),v.end());
    cout <<v[n-1]-v[0] <<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      solve();
    }
}
