/*
B. Good Kid
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Slavic is preparing a present for a friend's birthday. He has an array a
 of n
 digits and the present will be the product of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add 1
 to exactly one of his digits.

What is the maximum product Slavic can make?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤9
) — the number of digits.

The second line of each test case contains n
 space-separated integers ai
 (0≤ai≤9
) — the digits in the array.

Output
For each test case, output a single integer — the maximum product Slavic can make, by adding 1
 to exactly one of his digits.

*/

#include <bits/stdc++.h>
using namespace std;

int maxProduct(int n, vector<int>& digits) {
    sort(digits.begin(), digits.end()); 
    digits.front() += 1; 

    int maxProduct = 1;
    for (int i = 0; i < n; ++i) {
        maxProduct *= digits[i];
    }

    return maxProduct;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> digits(n);
        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
        }

        int result = maxProduct(n, digits);
        cout << result << endl;
    }

    return 0;
}
