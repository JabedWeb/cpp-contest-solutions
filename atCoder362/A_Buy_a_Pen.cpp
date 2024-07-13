////https://atcoder.jp/contests/abc362/tasks/abc362_a
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int r,g,b;cin>>r>>g>>b;
    string s;cin>>s;
    if(s=="Red"){
        cout << min(g,b) <<endl;
    }
    else if(s=="Green"){
        cout << min(r,b)<<endl;
    }
    else if(s=="Blue"){
        cout << min(r,g) <<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
