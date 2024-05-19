////https://codeforces.com/contest/520/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    set <char> st;
    for(int i=0;i<n;i++){
        st.insert(tolower(s[i]));
    }
    if(st.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    solve();
}
