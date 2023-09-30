/*
Contest Setting
Problem
Submissions
Discussions
Time Limit ++    
Memory Limit  

SRBD is going to arrange Code Contest 2023 and needs your help to set the rounds.

There will be 2 online rounds consisting of different problems. Each of the problems costs  coins to prepare.

The panel has decided that if  participants are registered for the contest, they should prepare at least  problems total, where  should be satisfied.

The  problems will be distributed between the 2 rounds, with the first round having  problems and the second round having  problems.

You should also know that to host a round with  problems, it will cost you  coins.

There is a budget of  coins. You must determine the maximum number of participants that SRBD can register, so that the cost-sum of preparing problems and hosting the two rounds does not exceed the budget.

Input Format

The first line contains an integer  denoting the number of test cases. Then  testcases follow.

Each testcase consists of two integers  and  in a line, denoting the budget for the contest and the cost for preparing a single problem.

Constraints




Output Format

For each testcase print the answer in a separate line.

Sample Input 0

3
5 1
100 10
6 9
Sample Output 0

4
128
1
Explanation 0

In the  testcase:  participants will require  problems. Both rounds will have  problem each. Preparing the problems will cost  coins. Hosting the rounds cost  coins each. Sum total of cost is  coins, which is within the budget.
In the  testcase: The two rounds have  and  problems.
In the  testcase: Notice there can be  problems in any of the rounds costing  coins. This can support  participant for the contest.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int budget,cost;
        cin>>budget>>cost;
        int participate = 0;
        
    }
    return 0;
}