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
    int n;cin >> n;
    vector <int> v(n);
    int count_z=0;
    int count_neg=0;
    for(int i=0; i<n; i++) {
        cin >> v[i];
        if(v[i]<0) count_neg++;
        else if(v[i]==0) count_z++;


    };
    if(count_z>0){
        cout << 0 << endl;
        return;
    }
    else if(count_neg%2==1){
        cout << 0 << endl;
    }
    else {
        cout << 1 << endl;
        cout << 1 << " " <<0<< endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
