
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int count=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) count++;
    }
    cout<<count<<endl;
}

int main() {
    solve();
}
