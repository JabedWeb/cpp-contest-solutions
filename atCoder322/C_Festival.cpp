/*
C - Festival / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
250 points

Problem Statement
The AtCoder Kingdom holds a festival for 
N days. On 
M of these days, namely on the 
A 
1
​
 -th, 
A 
2
​
 -th, 
…, 
A 
M
​
 -th days, fireworks will be launched. It is guaranteed that fireworks will be launched on the last day of the festival. (In other words, 
A 
M
​
 =N is guaranteed.)

For each 
i=1,2,…,N, solve the following problem.

How many days later from the 
i-th day will fireworks be launched for the first time on or after the 
i-th day? If fireworks are launched on the 
i-th day, it is considered to be 
0 days later.
Constraints
1≤M≤N≤2×10 
5
 
1≤A 
1
​
 <A 
2
​
 <⋯<A 
M
​
 =N
All input values are integers.
Input
The input is given from Standard Input in the following format:

N 
M
A 
1
​
  
A 
2
​
  
… 
A 
M
​
 
Output
Print 
N lines.

The 
i-th line 
(1≤i≤N) should contain an integer representing the number of days from the 
i-th day until fireworks are launched for the first time on or after the 
i-th day.

Sample Input 1
Copy
3 2
2 3
Sample Output 1
Copy
1
0
0
The kingdom holds a festival for 
3 days, and fireworks are launched on the 
2-nd and 
3-rd days.

From the 
1-st day, the first time fireworks are launched is the 
2-nd day of the festival, which is 
1 day later.
From the 
2-nd day, the first time fireworks are launched is the 
2-nd day of the festival, which is 
0 days later.
From the 
3-rd day, the first time fireworks are launched is the 
3-rd day of the festival, which is 
0 days later.
Sample Input 2
Copy
8 5
1 3 4 7 8
Sample Output 2
Copy
0
1
0
0
2
1
0
0

*/



#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;

    vector<int> launchDays(M);
    for (int i = 0; i < M; ++i) {
        cin >> launchDays[i];
    }

    int nextLaunchDay = 0;
    for (int i = 1; i <= N; ++i) {
        if (i == launchDays[nextLaunchDay]) {
            cout << "0" << endl;
            nextLaunchDay++;
        } else {
            while (nextLaunchDay < M && launchDays[nextLaunchDay] < i) {
                nextLaunchDay++;
            }
            cout << launchDays[nextLaunchDay] - i << endl;
        }
    }
    return 0;
}
