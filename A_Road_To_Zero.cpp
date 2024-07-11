////https://codeforces.com/problemset/problem/1342/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){

    ll x,y;cin>>x>>y;
    ll a,b; cin >>a>>b;
    ll b_=b*min(x,y)+a*abs(x-y);
    ll a_=(x+y)*a; 
    cout <<min(b_,a_) <<endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      solve();
    }
}
