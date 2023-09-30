/*
A - First ABC 2 / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
100 points

Problem Statement
You are given a string 
S of length 
N consisting of A, B, and C.
Find the position where ABC first appears as a (contiguous) substring in 
S. In other words, find the smallest integer 
n that satisfies all of the following conditions.

1≤n≤N−2.
The string obtained by extracting the 
n-th through 
(n+2)-th characters of 
S is ABC.
If ABC does not appear in 
S, print -1.

Constraints
3≤N≤100
S is a string of length 
N consisting of A, B, and C.
Input
The input is given from Standard Input in the following format:

N
S
Output
Print the position where ABC first appears as a substring in 
S, or -1 if it does not appear in 
S.

Sample Input 1
Copy
8
ABABCABC
Sample Output 1
Copy
3
ABC first appears in 
S at the 
3-rd through 
5-th characters of 
S. Therefore, the answer is 
3.

Sample Input 2
Copy
3
ACB
Sample Output 2
Copy
-1
If ABC does not appear in 
S, print 
−1.

Sample Input 3
Copy
20
BBAAABBACAACABCBABAB
Sample Output 3
Copy
13

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    for (int i = 0; i < N - 2; i++) {
        if (S.at(i) == 'A' && S.at(i + 1) == 'B' && S.at(i + 2) == 'C') {
        cout << i + 1 << endl;
        return 0;
        }
    }
    
    cout << -1 << endl;
}