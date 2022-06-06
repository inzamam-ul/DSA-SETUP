#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix){
    int rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(matrix[i][j] == 0){
                int ind = i - 1;
                while (ind >= 0)
                {
                    if(matrix[ind][j] != 0){

                        matrix[ind][j] = -1;
                    }
                    ind --;
                }
                ind = i + 1;
                while (ind < rows)
                {
                   if(matrix[ind][j] != 0){

                        matrix[ind][j] = -1;
                    }
                    ind ++;
                }
                ind = j - 1;
                while (ind >= 0)
                {
                   if(matrix[i][ind] != 0){

                    matrix[i][ind] = -1;
                    }
                    ind --;
                }
                ind = j + 1;
                while (ind < cols)
                {
                   if(matrix[i][ind] != 0){

                    matrix[i][ind] = -1;
                    }
                    ind ++;
                }

                
            }
        }
    }

    for(int i=0; i < matrix.size(); i++){
        for(int j=0; j < matrix[0].size(); j++){
             if(matrix[i][j] == -1){

                    matrix[i][j] = 0;
                    }
        }
    }
}

int main(int argc, char const *argv[]){
vector<vector<int>> arr;
arr = {{7, 19, 3},{4, 21, 0}};
    
    setZeros(arr);

    for(int i=0; i < arr.size(); i++){
        for(int j=0; j < arr[0].size(); j++){
            cout << " " << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
