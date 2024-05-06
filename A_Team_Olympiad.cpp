////https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    vector <pair<int,int>> count1;
    vector <pair<int,int>> count2;
   vector <pair<int,int>> count3;

    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++){
        if(v[i]==1) {
            count1.push_back({i+1,1});
        }
        else if (v[i]==2) {
            
            count2.push_back({i+1,2});
        }
        else {
            count3.push_back({i+1,3});
        }
    }

   // int ans = min({count1.size(),count2.size(),count3.size()});
   int ans =min(min(count1.size(),count2.size()),count3.size());
    cout << ans << endl;
    for(int i=0;i<ans;i++){
        cout << count1[i].first << " " << count2[i].first << " " << count3[i].first << endl;
    }
}

int main() {
    solve();
}
