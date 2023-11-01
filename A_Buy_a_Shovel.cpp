////https://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int k,r; cin >> k >> r;
    int ans=1;
    while((k*ans)%10!=r && (k*ans)%10!=0) {

        ans++;
    };
    cout<<ans<<endl;

}

int main() {
    solve();
}

    //     if((k*i)%10==0 || (k*i)%10==r){
    //         ans=i;
    //         break;
    //          i++;
    //     }
    // cout<<ans<<endl;