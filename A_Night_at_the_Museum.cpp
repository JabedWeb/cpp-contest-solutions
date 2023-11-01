
////https://codeforces.com/contest/731/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string s; cin >> s;
    char cur='a';
    int ans=0;
    for(int i=0;i<s.size();i++){
        int clock=abs(s[i]-cur);
        int antiClock=26-clock;
        ans+=min(clock,antiClock);
        cur=s[i];
    }
    cout<<ans<<endl;
}


int main() {
    solve();
}
