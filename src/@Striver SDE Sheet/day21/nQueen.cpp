#include <bits/stdc++.h>
using namespace std;

void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int size)
{
    if (col == size)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < size; row++)
    {
        if (leftRow[row] == 0 && upperDiagonal[row + col] == 0 && lowerDiagonal[size - 1 + col - row] == 0)
        {
            board[row][col] = 'Q';
            leftRow[row] = 1;
            lowerDiagonal[size - 1 + col - row] = 1;
            upperDiagonal[row + col] = 1;
            solve(col + 1, board, ans, leftRow, upperDiagonal, lowerDiagonal, size);
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[size - 1 + col - row] = 0;
            upperDiagonal[row + col] = 0;
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');

    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    vector<int> leftRow(n, 0), upperDiagonal(2 * n, 0), lowerDiagonal(2 * n, 0);
    solve(0, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
    return ans;
}
