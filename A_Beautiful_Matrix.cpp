#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int x;cin>>x;
            if(x==1){
                p.first=i;
                p.second=j;
            }
        }
    }
    cout<<abs(p.first-3)+abs(p.second-3)<<endl;
    return 0;
}