#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;cin>>n;
    int k;cin>>k;

    while(k--){
        int lastDi=n%10;
        if(lastDi==0){
            n=n/10;
        }
        else {
            n=n-1;
        }
    }
    cout <<n;
}