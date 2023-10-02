#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    string z = ""; 
    for (int i = 0; i < x.length(); ++i) {
       
        if (y[i] > x[i]) {
            cout << -1 << endl;
            return 0;
        }
        
        z += y[i];
    }

    cout << z << endl;
    return 0;
}
