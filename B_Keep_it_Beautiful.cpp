/*
B. Keep it Beautiful
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
The array [a1,a2,…,ak]
 is called beautiful if it is possible to remove several (maybe zero) elements from the beginning of the array and insert all these elements to the back of the array in the same order in such a way that the resulting array is sorted in non-descending order.

In other words, the array [a1,a2,…,ak]
 is beautiful if there exists an integer i∈[0,k−1]
 such that the array [ai+1,ai+2,…,ak−1,ak,a1,a2,…,ai]
 is sorted in non-descending order.

For example:

[3,7,7,9,2,3]
 is beautiful: we can remove four first elements and insert them to the back in the same order, and we get the array [2,3,3,7,7,9]
, which is sorted in non-descending order;
[1,2,3,4,5]
 is beautiful: we can remove zero first elements and insert them to the back, and we get the array [1,2,3,4,5]
, which is sorted in non-descending order;
[5,2,2,1]
 is not beautiful.
Note that any array consisting of zero elements or one element is beautiful.

You are given an array a
, which is initially empty. You have to process q
 queries to it. During the i
-th query, you will be given one integer xi
, and you have to do the following:

if you can append the integer xi
 to the back of the array a
 so that the array a
 stays beautiful, you have to append it;
otherwise, do nothing.
After each query, report whether you appended the given integer xi
, or not.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of two lines. The first line contains one integer q
 (1≤q≤2⋅105
) — the number of queries. The second line contains q
 integers x1,x2,…,xq
 (0≤xi≤109
).

Additional constraint on the input: the sum of q
 over all test cases does not exceed 2⋅105
).

Output
For each test case, print one string consisting of exactly q
 characters. The i
-th character of the string should be 1 if you appended the integer during the i
-th query; otherwise, it should be 0.

Example
inputCopy
3
9
3 7 7 9 2 4 6 3 4
5
1 1 1 1 1
5
3 2 1 2 3
outputCopy
111110010
11111
11011
Note
Consider the first test case of the example. Initially, the array is []
.

trying to append an integer 3
. The array [3]
 is beautiful, so we append 3
;
trying to append an integer 7
. The array [3,7]
 is beautiful, so we append 7
;
trying to append an integer 7
. The array [3,7,7]
 is beautiful, so we append 7
;
trying to append an integer 9
. The array [3,7,7,9]
 is beautiful, so we append 9
;
trying to append an integer 2
. The array [3,7,7,9,2]
 is beautiful, so we append 2
;
trying to append an integer 4
. The array [3,7,7,9,2,4]
 is not beautiful, so we don't append 4
;
trying to append an integer 6
. The array [3,7,7,9,2,6]
 is not beautiful, so we don't append 6
;
trying to append an integer 3
. The array [3,7,7,9,2,3]
 is beautiful, so we append 3
;
trying to append an integer 4
. The array [3,7,7,9,2,3,4]
 is not beautiful, so we don't append  4

*/
#include <iostream>
#include <vector>

using namespace std;


vector<int> processQueries(int n, vector<int> queries) {
    vector<int> results;  

    bool elementDropped = false;
    int last_track = 0; 

    for (int i = 0; i < n; i++) {
        bool isAppend = true;
        if (elementDropped) {
           
            if (queries[i] < last_track)
                isAppend = false;
            else if (queries[i] > queries[0])
                isAppend = false;
            else
                last_track = queries[i]; 
        } else {
          
            if (queries[i] < last_track) {
                if (queries[i] > queries[0])
                    isAppend = false;
                else {
                    last_track = queries[i]; 
                    elementDropped = true; 
                }
            } else {
                last_track = queries[i];
            }
        }

        results.push_back(isAppend);
    }

    return results;
}

int main() {
    int t;
    cin >> t;

    
    while(t--) {
        int n; cin >> n;
        vector<int> queries(n);  

        for (int i = 0; i < n; i++) cin >> queries[i];
        vector<int> result = processQueries(n, queries);

        for (int i = 0; i < n; i++) cout << result[i];
        cout << endl;
    }

    return 0;
}
