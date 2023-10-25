#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int minimumWidth=0;
    vector <int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]<=k) minimumWidth++;
        else minimumWidth+=2;
    };
    cout <<minimumWidth<<endl;
}