////https://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string s;
    cin >> s;

    vector <int> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+') {
    
           // int x=stoi(s.substr(i,1));
            // v.push_back(x);
            v.push_back(s[i]-'0');
        }
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i];
        if(i!=v.size()-1) cout << "+";
    }
    cout << endl;
}

int main() {
      solve();
}
