#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n){
    vector<vector<int>> r(n);

    for(int i=0; i < n; i++){
        r[i].resize(i+1);
        r[i][0] = r[i][i] = 1;

        for(int j = 1; j < i; j++){
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }

    return r;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> pascal = printPascal(7);


    for(auto row: pascal){
        for(int s = 0; s < 7-row.size(); s++){
            cout << " ";
        }
        for(auto col: row){
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
