////https://codeforces.com/contest/1973/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int a,b,c;cin>>a>>b>>c;
    int total = a+b+c;
    if(total%2!=0) {
        cout <<-1<<endl;
        return;
    }
    int ans=total/2;
    if(a+b<ans){
        ans = a+b;
    }
    cout<<ans<<endl;
}

int main() {
    int t; cin >> t;
    while(t--){
       solve();
    }
    
}
