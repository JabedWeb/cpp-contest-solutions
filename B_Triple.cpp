//https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
      vector <int> count(n+1);
      for(int i=1;i<=n;i++) count[i]=0;
    
    for(int i=1;i<=n;i++){
      int x;cin>>x;
      count[x]++;
    }
   bool flag=false;
    for(int i=1;i<=n;i++) {
      if(count[i]>=3){
         
         cout<<i <<endl;
         flag=true;
         break;
       }
    };
    if(!flag) cout<<-1<<endl;
   }
}