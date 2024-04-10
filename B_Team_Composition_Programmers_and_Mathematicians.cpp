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
    int a,b;
    cin>>a>>b;
    int maximum_teams = min(a, b);
    int total_numbers=a+b;
    int numbers=total_numbers/4;
    cout<<min(maximum_teams,numbers)<<endl;

}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
