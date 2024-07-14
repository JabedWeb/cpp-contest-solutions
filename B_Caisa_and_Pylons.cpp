////https://codeforces.com/contest/463/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;
    cin >> n;
    vector<int> heights(n + 1);
    heights[0] = 0; // The height of the 0th pylon is 0.

    for (int i = 1; i <= n; i++) {
        cin >> heights[i];
    }

    int energy = 0;
    int moneySpent = 0;

    for (int i = 0; i < n; i++) {
        // Calculate the energy change when moving from pylon i to pylon i+1
        int energyChange = heights[i] - heights[i + 1];
        energy += energyChange;

        // If energy is negative, we need to spend money to make it non-negative
        if (energy < 0) {
            moneySpent += -energy;
            energy = 0; // Reset energy to 0 after spending money
        }
    }

    cout << moneySpent << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}



// void solve(){
//     int n;cin>>n;
//     vector<int>v(n+1);
//     v[0]=0;
//     int ans=0;
//     for(int i=1;i<=n;i++){
//         int x;cin>>x;
//         v[i]=x;
//        // cout<<v[i-1]<<" " <<v[i]<<endl;
//         if(v[i-1]-v[i]<0){
//             ans+=abs(v[i]-v[i-1]);
//         }
//     }
//     cout<<ans<<endl;
// }