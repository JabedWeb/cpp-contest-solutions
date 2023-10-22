#include<bits/stdc++.h>
using namespace std;

int beautiful(int n) {
    int sum = 0;
    while(n!=0){
        int lastD=n%10;
        sum+=lastD;
        n=n/10;
    }
    return sum;
}
 
int main() {
    int t;cin>>t;
    while(t--){
        int x,k;cin>>x>>k;
        int y=x;
        while((beautiful(y)%k)!=0){
            y++;
        }
        cout<<y<<endl;
    }
}