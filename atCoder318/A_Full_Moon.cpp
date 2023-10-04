#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,p;cin>>n>>m>>p;
    int count=0;
    int sum=0;
    if(m>n){
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<=n,sum<=n;i++){
        sum=m+i*p;
        count++;
    }
    cout<<count<<endl;
}