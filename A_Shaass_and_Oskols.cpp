
// Link: https://codeforces.com/problemset/problem/294/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int m; cin >> m;
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        x--;
        if(x>0) v[x-1]+=y-1;
        if(x<n-1) v[x+1]+=v[x]-y;
        v[x]=0;
    }
    for(int i=0;i<n;i++) cout<<v[i]<<endl;
}

int main() {
    solve();
}
