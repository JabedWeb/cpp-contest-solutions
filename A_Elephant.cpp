////https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    if(n<=5){
        cout <<1 <<endl;
        return;
    }
    if(n%5==0) cout << n/5 <<endl;
    else cout << (n/5)+1 <<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
