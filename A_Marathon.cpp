#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        vector <int> v(4);
        int count=0;
        for(int i=0;i<4;i++){
            cin >> v[i];
        }
        int tim=v[0];
        for(int i=1;i<4;i++){
            if(tim<v[i]) count++;
        }
        cout <<count <<endl;
    }
}