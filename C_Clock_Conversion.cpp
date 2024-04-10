//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(string time){
   int hour = stoi(time.substr(0, 2));
   string period = (hour < 12 || hour == 24) ? "AM" : "PM";
    
    hour = hour % 12;
    if (hour == 0) hour = 12;
    
    string fh = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    
    cout << fh << time.substr(2, 3) << " " << period << endl;
}

int main() {
    int t; cin >> t;
    string s;
    while(t--){
        cin>>s;
        solve(s);
    }
}
