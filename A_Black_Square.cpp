////https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    vector <int> v(5);
    for(int i=1;i<=4;i++) cin>>v[i];
    string s;cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=v[s[i]-'0'];
    } 
    cout<<ans<<endl;
}

int main() {
    solve();
}
