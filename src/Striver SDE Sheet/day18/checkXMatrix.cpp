#include <bits/stdc++.h>
using namespace std;


bool checkXMatrix(vector<vector<int>>& grid) {
    int r = grid.size();
    for( int i=0; i<r; i++){
        for( int j=0; j<r; j++){
            
            if( grid[i][i] == 0 ) return false;
            
            if(( i+j==r-1) && grid[i][j]==0) return false;
            
            if( (i!=j) && ((i+j)!= r-1) && grid[i][j] != 0)
                    return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    // vector<vector<int>> grid = {{2,0,0,1},{0,3,1,0},{0,5,2,0},{4,0,0,2}};
    vector<vector<int>> grid = {{0,0,0,0,1},{0,4,0,1,0},{0,0,5,0,0},{0,5,0,2,0},{4,0,0,0,2}};
    // vector<vector<int>> grid = {{6,0,0,0,0,0,0,18},{0,17,0,0,0,0,18,0},{0,0,13,0,0,17,0,0},{0,0,0,9,18,0,0,0},{0,0,0,2,20,0,0,0},{0,0,20,0,0,3,0,0},{0,14,0,0,0,0,11,0},{19,0,0,0,0,0,0,9}};
    bool res = checkXMatrix(grid);
    cout << res;
    return 0;
}


bool checkXMatrix(vector<vector<int>>& grid) {
    int r = grid.size();
    for( int i=0; i<r; i++){
        for( int j=0; j<r; j++){
            
            if( grid[i][i] == 0 ) return false;
            
            if(( i+j==r-1) && grid[i][j]==0) return false;
            
            if( (i!=j) && ((i+j)!= r-1) && grid[i][j] != 0)
                    return false;
        }
    }
    return true;
}