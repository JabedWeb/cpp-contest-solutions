////https://codeforces.com/problemset/problem/405/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}

int main() {
    solve();
}
