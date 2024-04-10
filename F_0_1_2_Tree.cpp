#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Check if the conditions can be satisfied
        if (a > b + 1 + c || b > a + c + 1) {
            cout << "-1" << endl;
            continue;
        }

        // Calculate the minimum height of the tree
        int minHeight = max(a + c, b) + 1;
        cout << minHeight << endl;
    }

    return 0;
}
