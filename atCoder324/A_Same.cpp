#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    set<int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.insert(x);
    }
    if(a.size()>1) cout <<"No"<<endl;
    else cout <<"Yes" << endl;
}