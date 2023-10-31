////https://codeforces.com/problemset/problem/381/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int left=0,right=n-1;
    int Sereja=0,Dima=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[left]>v[right]){
                Sereja+=v[left];
                left++;
                
            }
            else{
                Sereja+=v[right];
                right--;
                
            }
        }
        else{
            if(v[left]>v[right]){
                Dima+=v[left];
                left++;
                
            }
            else{
                Dima+=v[right];
                right--;
                
            }

        }

    }
    cout<<Sereja<<" "<<Dima<<endl;
}
int main() {
    solve();
}
