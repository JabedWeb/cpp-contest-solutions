////https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin >> n;
    vector <string> v(n+1);
    int flag=1;
    for(int i=1;i<=n;i++){
        cin >> v[i];
        if(v[i]!=v[i-1]){
            flag++;
        }
    }
    cout << max(1,flag-1) << endl;
}

int main() {
  
    solve();
}
