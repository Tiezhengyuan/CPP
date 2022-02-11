#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void){
    
    int row=2, col=3;
    int **p = new int *[row];
    for(int i = 0; i < row; i++){
        p[i] = new int[col];
        for(int j = 0; j < col; j++){
            p[i][j] = i+j;
            cout << p[i][j];
        }
        cout << endl;
    }
    return 0;
}