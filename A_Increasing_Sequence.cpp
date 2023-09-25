/*
A. Increasing Sequence
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a sequence a1,a2,…,an
. A sequence b1,b2,…,bn
 is called good, if it satisfies all of the following conditions:

bi
 is a positive integer for i=1,2,…,n
;
bi≠ai
 for i=1,2,…,n
;
b1<b2<…<bn
.
Find the minimum value of bn
 among all good sequences b1,b2,…,bn
.
Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

Output
For each test case, print a single integer — the minimum value of bn
 among all good sequences b
.

Example
inputCopy
3
5
1 3 2 6 7
4
2 3 4 5
1
1
outputCopy
8
4
2
Note
In the first test case, b=[2,4,5,7,8]
 is a good sequence. It can be proved that there is no good b
 which b5<8
.

In the second test case, b=[1,2,3,4]
 is an optimal good sequence.

In the third test case, b=[2]
 is an optimal good sequence.


*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int start=1;
        if(a[0] == 1) {
            start = 2;
        } else {
            start = 1;
        }

        int b[n];
        b[0] = start;
        start++;
        for (int i = 1; i < n; i++) {

            if(a[i]==start) {
                b[i] = start + 1;
                start = start + 2;
            } else {
                b[i] = start;
                start++;
            }
        }
        cout << b[n - 1] << endl;
    }

    return 0;
}
