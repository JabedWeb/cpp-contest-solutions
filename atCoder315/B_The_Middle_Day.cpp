#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;cin>>m;
    vector <int > month(m);
    int sum=0;
    for(int i=0;i<m;i++){
        cin>>month[i];
        sum+=month[i];
    }
    int middle=(sum+1)/2;
    int ans=0;
    for(int i=0;i<m;i++){
        ans+=month[i];
        if(ans>=middle){
            cout<<i+1 << " " << middle-ans+month[i] << endl ;
            break;
        }
    }
    

}