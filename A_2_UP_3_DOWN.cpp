#include <bits/stdc++.h>
using namespace std;


int main() {
    int x, y;cin >> x >> y;

    int diff = y - x;

    if ((diff >= 1 && diff <= 2) || (diff >= -3 && diff <= -1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
