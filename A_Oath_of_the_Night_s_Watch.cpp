////https://codeforces.com/contest/768/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;


void solve(){
    int n;cin>>n;
    vector<ll> a(n);
    int count=0;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=1;i<n-1;i++){
        if(a[i]>a[0] && a[i]<a[n-1]) count++;
    }
    cout<<count<<endl;
}

int main() {
    solve();
}
