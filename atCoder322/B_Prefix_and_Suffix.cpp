/*
B - Prefix and suffix / 
time Limit: 2 sec / memory Limit: 1024 mB

score : 
200 points

Problem statement
You are given two strings 
s and 
t consisting of lowercase English letters. the lengths of 
s and 
t are 
n and 
m, respectively. (the constraints guarantee that 
n≤m.)

s is said to be a prefix of 
t when the first 
n characters of 
t coincide 
s.
s is said to be a suffix of 
t when the last 
n characters of 
t coincide 
s.

If 
s is both a prefix and a suffix of 
t, print 
0;
If 
s is a prefix of 
t but not a suffix, print 
1;
If 
s is a suffix of 
t but not a prefix, print 
2;
If 
s is neither a prefix nor a suffix of 
t, print 
3.

Constraints
1≤n≤m≤100
s is a string of length 
n consisting of lowercase English letters.
t is a string of length 
m consisting of lowercase English letters.
Input
the input is given from standard Input in the following format:

n 
m
s
t
Output
Print the answer according to the instructions in the problem statement.

sample Input 1
Copy
3 7
abc
abcdefg
sample Output 1
Copy
1
s is a prefix of 
t but not a suffix, so you should print 
1.

sample Input 2
Copy
3 4
abc
aabc
sample Output 2
Copy
2
s is a suffix of 
t but not a prefix.

sample Input 3
Copy
3 3
abc
xyz
sample Output 3
Copy
3
s is neither a prefix nor a suffix of 
t.

sample Input 4
Copy
3 3
aaa
aaa
sample Output 4
Copy
0
s and 
t may coincide, in which case 
s is both a prefix and a suffix of 
t.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    if (t.substr(0, n) == s && t.substr(m - n,m) == s) {
        cout << "0" << endl;
    } else if (t.substr(0, n) == s) {
        cout << "1" << endl;
    } else if (t.substr(m - n,m) == s) {
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }

    return 0;
}
