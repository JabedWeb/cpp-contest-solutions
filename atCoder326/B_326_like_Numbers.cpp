#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    while (true) {
        int temp = n;
        vector<int> v;
        
        while (temp > 0) {
            v.push_back(temp % 10);
            temp /= 10;
        }
        if (v[0] == v[1] * v[2]) {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}
