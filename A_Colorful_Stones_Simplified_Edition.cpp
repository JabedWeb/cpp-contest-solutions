
////https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    string s,t; cin >> s >> t;
    int cur=1;
    for(int i=0;i<t.size();i++){
        if(s[cur-1]==t[i]) cur++;
    }
    cout<<cur<<endl;
}

int main() {
    solve();
}
