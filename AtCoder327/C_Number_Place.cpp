/// https://atcoder.jp/contests/abc327/tasks/abc327_c
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;


bool isValidSudoku(const vector<vector<int>>& board) {
    for (int i = 0; i < 9; ++i) {
        unordered_set<int> row, col, blk;
        for (int j = 0; j < 9; ++j) {
            // Check row and column
            if (row.find(board[i][j]) != row.end() || col.find(board[j][i]) != col.end())
                return false;
            row.insert(board[i][j]);
            col.insert(board[j][i]);

            // Check 3x3 block
            int blkRow = (i / 3) * 3 + j / 3;
            int blkCol = (i % 3) * 3 + j % 3;
           
            //cout<<i<<" "<<j<<endl;
             //cout<<blkRow<<" "<<blkCol<<endl;
            if (blk.find(board[blkRow][blkCol]) != blk.end())
                return false;
            blk.insert(board[blkRow][blkCol]);
            // //print blk every iteration for debug
            // for(auto it:blk) cout<<it<<" ";
            // cout<<endl;
            // cout<<"-----------------"<<endl;
        }
    }
    return true;
}

int main() {
    vector<vector<int>> board(9, vector<int>(9));
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            cin >> board[i][j];

    cout << (isValidSudoku(board) ? "Yes" : "No") << endl;
    return 0;
}
