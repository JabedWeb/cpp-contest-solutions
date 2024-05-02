////https://codeforces.com/contest/443/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
 string s;
    getline(cin,s);
    set <char> st;
    for( int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            st.insert(s[i]);
        }
    }
    cout << st.size() << endl;
}

int main() {
    solve();
}
