#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1){
            cout <<"0"<<endl;
            continue;
        }
        n=n-1;
        cout << ((n%7)==0 ? (n/7) : (n/7)+1) << endl;
    }
}