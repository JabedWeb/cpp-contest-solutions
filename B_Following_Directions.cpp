#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n;cin>>n;
        int x=0,y=0;
        bool flag=false;
        string direction;cin>>direction;
        for(int i=0;i<n;i++){
            if(direction[i]=='L') x--;
            else if(direction[i]=='R') x++;
            else if(direction[i]=='U') y++;
            else if(direction[i]=='D') y--;
            if(x==1 && y==1){
                cout << "YES" << endl;
                flag=true;
                break;
            }
        }
        if(!flag) cout << "NO" << endl;

    }
}