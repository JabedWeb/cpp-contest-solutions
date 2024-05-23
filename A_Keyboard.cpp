////https://codeforces.com/contest/474/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;cin >> direction;
    string s;cin >> s;
    for(int i=0;i<s.size();i++){
        if(direction=='R'){
            cout << keyboard[keyboard.find(s[i])-1]; // find returns the index of the character in the string
        }
        else{
            cout << keyboard[keyboard.find(s[i])+1];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
      solve();
}
