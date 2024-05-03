////https://codeforces.com/contest/686/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    ll n,x;cin>>n>>x;
    cin.ignore();
    ll distressed=0;
    while(n--){
        string s;
        getline(cin,s);
        if(s[0]=='+') x+=stoll(s.substr(2));
        else {
            if(x>=stoll(s.substr(2))){
                x-=stoll(s.substr(2));
            }
            else distressed++;
        }
    }
    cout << x << " " << distressed << endl;
}

int main() {
    solve();
}
