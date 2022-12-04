#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m){

    int row = 0, col = 0;
    int prev, curr;
    while(row < n && col < m){
        if(row + 1 == n || col + 1 == m){
            break;
        }
        // Store the first element of next
        // row, this element will replace
        // first element of current row
        prev = mat[row + 1][col];

        // Move elements of first row
        // from the remaining rows
        for(int i = col; i < m; i++){
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }


//TODO: have to figure out why its wrong
        // for(int i = 0; i < m; i++){
        //     curr = mat[row][i];
        //     mat[row][i] = prev;
        //     prev = curr;
        // }

        row++;

        // Move elements of last column
        // from the remaining columns
        for(int i = row; i < n; i++)
        {
            curr = mat[i][m - 1];
            mat[i][m - 1] = prev;
            prev = curr;
        }
        m--;


        // Move elements of last row
        // from the remaining rows
        if (row < n)
        {
            for(int i = m - 1; i >= col; i--)
            {
                curr = mat[n - 1][i];
                mat[n - 1][i] = prev;
                prev = curr;
            }
        }
        n--;
   
        // Move elements of first column
        // from the remaining rows
        if (col < m)
        {
            for(int i = n - 1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;

    }

}

int main(int argc, char const *argv[])
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};

    rotateMatrix(matrix,4,4);
    for(auto row: matrix){
        for(auto col: row){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
