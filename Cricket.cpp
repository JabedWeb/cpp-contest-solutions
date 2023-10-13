#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int runs = 0;
        int wickets = 0;

        for (char c : s) {
            if (c == 'W') {
                wickets++;
            } else {
                runs += (c - '0');
            }
        }

        int overs = s.length() / 6;
        int balls = s.length() % 6;

        cout << overs << "." << balls << " Over";
        if (s.length() > 6) {
            cout << "s";
        }

        cout << " " << runs << " Run";
        if (runs != 1) {
            cout << "s";
        }

        cout << " " << wickets << " Wicket";
        if (wickets > 1) {
            cout << "s";
        }

        cout << "." << endl;
    }

    return 0;
}
