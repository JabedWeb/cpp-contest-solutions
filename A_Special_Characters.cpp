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
    int n; cin >> n;
    int count = 0;
    if(n%2==1) {
        cout <<"NO"<<endl;
        return;
    }
    cout <<"YES"<<endl;
    for(int i=0;i<n/2;i++){
        if(count%2==0) cout <<"AA";
        else cout <<"BB";
        count++;
    }
    cout <<endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
