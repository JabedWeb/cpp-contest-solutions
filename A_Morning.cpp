#include <bits/stdc++.h>
using namespace std;


int distance(int a, int b) {
    if (a == 0) a = 10;
    if (b == 0) b = 10;
    return abs(a - b);
}

int time(string pin) {
    int curr = 1;
    int time = 0;
    for (char c : pin) {
        int digit = c - '0';
        time += distance(curr, digit) + 1;
        curr = digit;
    }
    return time;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        string pin;
        cin >> pin;
        cout << time(pin) << endl;
    }
    return 0;
}
