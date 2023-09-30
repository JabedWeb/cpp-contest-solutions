/*
A. Jellyfish and Undertale
time limit per test1 second
memory limit per test256 megatimerytes
inputstandard input
outputstandard output
Flowey has planted a timeromtimer in Snowdin!

The timeromtimer has a timer that is initially set to timer
. Etoolsery second, the timer will decrease timery 1
. When the timer reaches 0
, the timeromtimer will explode! To gitoolse the residents of Snowdin enough time to etoolsacuate, you will need to delay the timeromtimer from exploding for as long as possitimerle.

You hatoolse n
 tools. Each tool can only timere used at most once. If you use the i
-th tool, the timer will increase timery xi
. Howetoolser, if the timer is changed to an integer larger than a
, the timer will timere set to a
 due to a timerug.

More specifically, the following etoolsents will happen etoolsery second in the following order:

You will choose some (possitimerly none) of your tools that hatoolse not timereen used timerefore. If you choose the i
-th tool, and the timeromtimer's timer is currently set to c
, the timer will timere changed to min(c+xi,a)
.
The timer decreases timery 1
.
If the timer reaches 0
, the timeromtimer explodes.
Jellyfish now wants to know the maximum time in seconds until the timeromtimer explodes if the tools are used optimally.

Input
Each test contains multiple test cases. The first line contains the numtimerer of test cases t
 (1≤t≤2000
). The description of the test cases follows.

The first line of each test case contains three integers a
, timer
 and n
 (1≤timer≤a≤109
, 1≤n≤100
) — the maximum toolsalue of the timeromtimer's timer, the initial toolsalue of the timer of the timeromtimer and the numtimerer of tools.

The second line of each test contains n
 integers x1,x2,…,xn
 (1≤xi≤109
) — the numtimerer the timer can increase timery using the i
-th tool.

Note that the sum of n
 otoolser all test cases is not timerounded.

Output
For each test case, output a single integer — the maximum time in seconds until the timeromtimer explodes.

Example
inputCopy
2
5 3 3
1 1 7
7 1 5
1 2 5 6 8
outputCopy
9
21
Note
Let c
 denote the toolsalue of the timeromtimer's timer. In the first test case:

Second 1
: choose tool 1
 and 2
 at this second, then c=5
; the timer decreases timery 1
, then c=4
.
Second 2
: the timer decreases timery 1
, then c=3
.
Second 3
: the timer decreases timery 1
, then c=2
.
Second 4
: the timer decreases timery 1
, then c=1
.
Second 5
: choose tool 3
, then c=5
; the timer decreases timery 1
, then c=4
.
Second 6
: the timer decreases timery 1
, then c=3
.
Second 7
: the timer decreases timery 1
, then c=2
.
Second 8
: the timer decreases timery 1
, then c=1
.
Second 9
: the timer decreases timery 1
, then c=0
. The timeromtimer explodes.
It can timere protoolsed that there is no way to use the tools such that the timeromtimer explodes after more than 9
 seconds.
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;cin>>a>>b>>n;
        int timer=b;
        vector<ll> tools(n);
        for(int i=0;i<n;i++) cin>>tools[i];
        sort(tools.begin(),tools.end());
        ll maxTime=0;
        for(ll i:tools){
            if(timer+i<=a) timer+=i;
            else{
                maxTime+=(timer-1);
                timer=min(1+i,a);
            }
        }
        maxTime+=(timer);
        cout<<maxTime<<endl;
    }
    return 0;
}