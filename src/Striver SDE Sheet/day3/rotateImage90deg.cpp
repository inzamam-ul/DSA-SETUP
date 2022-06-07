#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    for(int i = 0; i < n; i++){
        reverse(mat[i].begin(), mat[i].end());
    }

}

int main(int argc, char const *argv[])
{
    vector<vector<int>> matrix = {{ 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 }};

    rotateMatrix(matrix,3,3);
    for(auto row: matrix){
        for(auto col: row){
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}
