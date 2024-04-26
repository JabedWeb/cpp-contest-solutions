//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n,m; cin >> n >> m;
    if(n==1 && m==1) {
        cout << 0 << endl;
        return;
    }
    if(m>n) swap(n,m);
    int st=m-1;
    int me=m-1;
    cout << st+me +(n-1)+1;
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
