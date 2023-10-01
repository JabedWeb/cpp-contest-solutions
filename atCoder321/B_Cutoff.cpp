/*

B - Cutoff  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
200 points

Problem Statement
There is an exam structured as follows.

The exam consists of 
N rounds called round 
1 to 
N.
In each round, you are given an integer score between 
0 and 
100, inclusive.
Your final grade is the sum of the 
N−2 of the scores earned in the rounds excluding the highest and lowest.
Formally, let 
S=(S 
1
​
 ,S 
2
​
 ,…,S 
N
​
 ) be the sequence of the scores earned in the rounds sorted in ascending order, then the final grade is 
S 
2
​
 +S 
3
​
 +⋯+S 
N−1
​
 .
Now, 
N−1 rounds of the exam have ended, and your score in round 
i was 
A 
i
​
 .
Print the minimum score you must earn in round 
N for a final grade of 
X or higher.
If your final grade will never be 
X or higher no matter what score you earn in round 
N, print -1 instead.
Note that your score in round 
N can only be an integer between 
0 and 
100.

Constraints
All input values are integers.
3≤N≤100
0≤X≤100×(N−2)
0≤A 
i
​
 ≤100
Input
The input is given from Standard Input in the following format:

N 
X
A 
1
​
  
A 
2
​
  
… 
A 
N−1
​
 
Output
Print the answer.

Sample Input 1
Copy
5 180
40 60 80 50
Sample Output 1
Copy
70
Your scores in the first four rounds were 
40, 
60, 
80, and 
50.
If you earn a score of 
70 in round 
5, the sequence of the scores sorted in ascending order will be 
S=(40,50,60,70,80), for a final grade of 
50+60+70=180.
It can be shown that 
70 is the minimum score you must earn for a final grade of 
180 or higher.

Sample Input 2
Copy
3 100
100 100
Sample Output 2
Copy
0
Your scores in the first two rounds were 
100 and 
100.
If you earn a score of 
0 in round 
3, the sequence of the scores sorted in ascending order will be 
S=(0,100,100), for a final grade of 
100.
Note that the highest score, 
100, is earned multiple times, and only one of them is excluded. (The same goes for the lowest score.)
It can be shown that 
0 is the minimum score you must earn for a final grade of 
100 or higher.

Sample Input 3
Copy
5 200
0 0 99 99
Sample Output 3
Copy
-1
Your scores in the first four rounds were 
0, 
0, 
99, and 
99.
It can be shown that your final grade will never be 
200 or higher no matter what score you earn in round 
5.

Sample Input 4
Copy
10 480
59 98 88 54 70 24 8 94 46
Sample Output 4
Copy
45

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n-1);
    int sum =0;

    for (int i = 0; i < v.size(); i++) cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 1; i < v.size()-1; i++) sum += v[i];

    int ans = -1;
    int i=0;
    for(i =0;i<=100;i++){
        v[v.size()-1] = i;
        if(sum+i>=x) {
            ans = i;
            break;
        }
    }
    if(ans-x==0) cout << 0 <<endl;
    else cout << ans << endl;
}   
