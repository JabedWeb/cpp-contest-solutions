////https://codeforces.com/problemset/problem/1942/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n,k; cin >> n >> k;
    if(k==1 | k==n) {
        for(int i=1; i<=n; i++) cout << k << " ";
        cout << endl;
    }
    else cout << -1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
       solve();
    }
}
