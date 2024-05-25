////https://codeforces.com/contest/188/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string s;
    cin >> s;
    string vowels = "aeiouy";
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(vowels.find(tolower(s[i])) == string::npos){
            ans += ".";
            ans += tolower(s[i]);
        }
    }
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      solve();
}
