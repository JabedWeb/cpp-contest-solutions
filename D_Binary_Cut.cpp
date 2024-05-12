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
    string s;
    cin>>s;
    ll cnt=1, res=0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            continue;
        }
        else
        {
            cnt++;
        }
        if(s[i-1]=='0' && s[i]=='1')
        {
            res=1;
        }
    }
    cout<<cnt-res<<endl;
}

int main() {
    int t; cin >> t;
    while(t--){
       solve();
    }
   
}
