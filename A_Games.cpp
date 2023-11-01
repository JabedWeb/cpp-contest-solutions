////https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
void solve(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b; cin >> a >> b;
        v.push_back({a,b});
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[i].first==v[j].second) ans++;
        }
    }
    cout<<ans<<endl;
}

int main() {
    
    solve();
}



// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
// 	int i,n=0,m=0,x=3;
// 	cin>>n;
// 	int a[n],b[n];
	
// 	for(i=0;i<n;i++) cin>>a[i]>>b[i];
	
// 	for(i=0;i<n;i++)  m+=count(a,a+n,b[i]);
// 	cout<<m;
	
// }