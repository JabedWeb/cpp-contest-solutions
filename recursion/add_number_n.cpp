////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int n){
    if(n==1) return 1;
    return solve(n-1)+n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << solve(7) <<endl;
}
