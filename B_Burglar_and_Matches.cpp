////https://codeforces.com/contest/16/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
bool descendingOrder(pair<int,int>&a,pair<int,int>&b){
    return a.second > b.second ;
}
void solve(){
    int n , m;cin>>n>>m;

    vector<pair<int,int>> pai;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        pai.push_back({a,b});
    }

    sort(pai.begin(),pai.end(),descendingOrder);


    // int a=pai[0].first;
    // if(n<a){
    //     cout <<n*pai[0].second;
    //     return;
    // }
    int total=0;
    int ans=0;
    for(auto pi:pai){
        int a=pi.first;
        int b=pi.second;
        if(total+a<=n){
         total+=a;
         ans+=a*b;
        }
        else if (total+a>n){
            int remaining=n-total;
            total+=remaining;
            ans+=remaining*b;
        }
        if(total==n){
            break;
        }
    }
    cout << ans << endl;

    // for(auto pa:pai){
    //     cout << pa.first << " " << pa.second <<endl ;
    // }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
