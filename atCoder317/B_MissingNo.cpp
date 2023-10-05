#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int ptr=0;
    for(int i=v[0];i<=v[n-1];i++) {
        if(v[ptr]!=i) {
            cout << i << endl;
            return 0;
        }
        ptr++;
    }
     cout << v[n-1] + 1 << endl;

}