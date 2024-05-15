////https://codeforces.com/contest/365/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n,k;cin>>n>>k;
    int ans=0;
    while(n--){
        int x;cin>>x;
        set<int> s;
        while(x){
            s.insert(x%10);
            x/=10;
        }
        bool flag=true;
        for(int i=0;i<=k;i++){
            if(s.find(i)==s.end()){
                flag=false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout<<ans;
    cout<<endl;
}

int main() {
    solve();
}
