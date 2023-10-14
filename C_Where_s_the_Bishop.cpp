#include <bits/stdc++.h>
using namespace std;

bool boundChess(int i,int j){
    if(i<1 || i>6 || j<1 || j>6) return false;
    return true;
}

int main() {
    int t;cin>>t;
    while(t--){
        vector <vector <char>> a(8,vector<char>(8));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(!boundChess(i,j)) continue;
                if(a[i][j]=='#'){
                    if(a[i+1][j+1]=='#' && a[i+1][j-1]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#'){
                        cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }
            }
        }
    }
}