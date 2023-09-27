/*
B. Chips on the Board
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a board of size n×n
 (n
 rows and n
 colums) and two arrays of positive integers a
 and b
 of size n
.

Your task is to place the chips on this board so that the following condition is satisfied for every cell (i,j)
:

there exists at least one chip in the same column or in the same row as the cell (i,j)
. I. e. there exists a cell (x,y)
 such that there is a chip in that cell, and either x=i
 or y=j
 (or both).
The cost of putting a chip in the cell (i,j)
 is equal to ai+bj
.

For example, for n=3
, a=[1,4,1]
 and b=[3,2,2]
. One of the possible chip placements is as follows:

White squares are empty
The total cost of that placement is (1+3)+(1+2)+(1+2)=10
.

Calculate the minimum possible total cost of putting chips according to the rules above.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤3⋅105
).

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

The third line contains n
 integers b1,b2,…,bn
 (1≤bi≤109
).

The sum of n
 over all test cases doesn't exceed 3⋅105
.

Output
For each test case, print a single integer — the minimum possible total cost of putting chips according to the rules.

Example
inputCopy
4
3
1 4 1
3 2 2
1
4
5
2
4 5
2 3
5
5 2 4 5 3
3 4 2 1 5
outputCopy
10
9
13
24
Note
The first test case of the example is described in the statement.



*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int minA = *min_element(a.begin(), a.end());
        int minB = *min_element(b.begin(), b.end());
        
        long long int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++) {
            int value = b[i];
            sum1 += value + minA;
        }
        for (int i = 0; i < n; i++) {
            int value = a[i];
            sum2 += value + minB;
        }
        cout << min(sum1,sum2) << endl;
    }
    return 0;
}
