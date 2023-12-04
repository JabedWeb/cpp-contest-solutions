////https://codeforces.com/contest/1990/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int a,b,c;cin >> a >> b >> c;
    if(a%2==b%2 && a%2==c%2){
        cout << "1 1 1" << endl;
    }
    else if(a%2==b%2 ){
        cout << "0 0 1" << endl;
    }
    else if(a%2==c%2){
        cout << "0 1 0" << endl;
    }
    else if(b%2==c%2){
        cout << "1 0 0" << endl;
    }
    else{
        cout << "0 0 0" << endl;
    }
    
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
