//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
        v[i]=i;
    }
    if(n%2==0){
        for(int i=1;i<=n-2;i+=2){
            swap(v[i],v[i+1]);
        }
        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=1;i<=n-5;i+=2){
            swap(v[i],v[i+1]);
        }
        swap(v[n-4],v[n-2]);
        swap(v[n-3],v[n-4]);

        for(int i=1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;    
    }
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
