
////https://codeforces.com/contest/766/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string a,b;
    cin>>a>>b;
    if(a==b) cout<<-1;
    else cout<<max(a.size(),b.size());
    cout<<endl;
}

int main() {
  solve();
}
