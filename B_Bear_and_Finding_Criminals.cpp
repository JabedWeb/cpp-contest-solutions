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
    int numCities, police_index;

    cin >> numCities >> police_index;

    vector<int> criminals(numCities);

    for (int i = 0; i < numCities; i++) {
        cin >> criminals[i];
    }

    int sum = 0;
    police_index--;

    if (criminals[police_index] == 1) {
        sum++;
    }

    int left = police_index - 1;
    int right = police_index + 1;

    while (left >= 0 || right < numCities) {
        if (left >= 0 && right < numCities) {
            if (criminals[left] == 1 && criminals[right] == 1) {
                sum += 2;
            }
        } else if (right < numCities) {
            if (criminals[right] == 1) {
                sum++;
            }
        }
         else {
            if (criminals[left] == 1) {
                sum++;
            }
        }

        left--;
        right++;
    }

    cout << sum << endl;

}

int main() {
    solve();
}
