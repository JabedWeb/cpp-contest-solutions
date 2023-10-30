////https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    string s;cin >> s;
    int count=0;
    int count1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            count++;
        }
    }
    count1=s.size()-count;
    if(count>count1){
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
        cout << s << endl;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        cout << s << endl;
    }
}

int main() {
    solve();
}
