//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    if (k >= n) {
        cout << "NO" << endl;
        return;
    }
    int total_batches_one_oven = (n + k - 1) / k; // ceil(n / k)
    int total_time_one_oven = total_batches_one_oven * t;

    int batches_during_Second_oven_build = d / t;
    int cakes_while_building = batches_during_Second_oven_build * k;


    // Calculate remaining cakes needed after building the second oven
    int remaining_cakes = n - cakes_while_building;

    // Now two ovens are baking, so each cycle takes t minutes and produces 2*k cakes
    int batches_two_ovens = (remaining_cakes + (2 * k) - 1) / (2 * k); // ceil(remaining_cakes / (2*k))
    int time_two_ovens = batches_two_ovens * t + d;

    if (time_two_ovens < total_time_one_oven) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
}
