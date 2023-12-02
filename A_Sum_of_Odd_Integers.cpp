
//https://codeforces.com/contest/1327/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;


void solve(){
    ll n,k;
  
    cin >> n >> k;
    ll odd_sum = k*k;
    if(n%2==0 && k%2==0){
        if(odd_sum<=n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else if(n%2==1 && k%2==1){
        if(odd_sum<=n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }

}

int main() {
    int t; cin >> t;
    while(t--){
       solve();

    }
   
}
