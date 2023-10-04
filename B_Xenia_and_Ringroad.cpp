#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    
    vector<int> a(m); 
    for(int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    
    long long time = 0;
    int current_position = 1;

    for(int i = 0; i < m; ++i) {
        if(a[i] < current_position) time += n - current_position + a[i];
        else if(a[i] > current_position) time += a[i] - current_position;
        current_position = a[i];
    }
    cout << time << endl;
    
    return 0;
}
