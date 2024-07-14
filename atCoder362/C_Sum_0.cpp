// ////https://atcoder.jp/contests/abc362/tasks/abc362_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> ranges(n);
    ll minSum = 0, maxSum = 0;
    
    for (int i = 0; i < n; i++) {
        ll L, R;
        cin >> L >> R;
        ranges[i] = {L, R};
        minSum += L;
        maxSum += R;
    }
    
    // Check if a sum of 0 is possible
    if (minSum > 0 || maxSum < 0) {
        cout << "No" << endl;
        return;
    }
    
    // A solution is possible, construct it
    cout << "Yes" << endl;
    vector<ll> result(n);
    ll currentSum = minSum;
    
    // Start with the minimum values
    for (int i = 0; i < n; ++i) {
        result[i] = ranges[i].first;
    }
    
    // Adjust values to make the sum zero
    for (int i = 0; i < n && currentSum < 0; ++i) {
        ll L = ranges[i].first, R = ranges[i].second;
        ll maxIncrease = R - L;
        ll increase = min(maxIncrease, -currentSum);
        result[i] += increase;
        currentSum += increase;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}























// void solve(){
//     int n;cin>>n;
//     vector<ll> v(n);
//     bool flag=true;
//     for(int i=0;i<n;i++){
//         int L1,R1;cin>>L1>>R1;
//         if(abs(R1-L1)>1){
//             v[i]=L1+1;
//         }
//         else flag=false;
//     }
//     if(flag==true){
//         cout <<"Yes"<<endl;
//         for(int i=0;i<n;i++){
//             cout << v[i] <<" ";
//         }
//         cout <<endl;
//     }
//     else cout <<"No"<<endl;
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     solve();
// }
