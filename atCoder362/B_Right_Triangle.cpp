////https://atcoder.jp/contests/abc362/tasks/abc362_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    //for A 
    int xa,ya;cin>>xa>>ya;
    //for B
    int xb,yb;cin>>xb>>yb;
    //for C
    int xc,yc;cin>>xc>>yc;
   
   //for AB // formula for distance between two points AB^2=(xb-xa)^2+(yb-ya)^2
    int AB_2=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
    int BC_2=(xc-xb)*(xc-xb)+(yc-yb)*(yc-yb);
    int AC_2=(xc-xa)*(xc-xa)+(yc-ya)*(yc-ya);

    if(AB_2+BC_2==AC_2 || AB_2+AC_2==BC_2 || AC_2+BC_2==AB_2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
