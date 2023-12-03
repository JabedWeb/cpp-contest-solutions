//https://codeforces.com/contest/1902/problem/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;


void solve(){
        int n;cin >> n;

        string s; cin >> s;
        int count=0;  
        for(int i=0;i<n;i++){
           if(s[i]=='0'){
            count++;
            break;
           }
        }
        if(count>0 ) cout <<"YES" <<endl;
        else cout <<"NO" <<endl;
}

int main() {
    int t; cin >> t;
    while(t--){
         solve();
    }
}
