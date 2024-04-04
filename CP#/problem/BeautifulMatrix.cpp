#include<bits/stdc++.h>
 
using namespace std;
 
 
int beautiful(int matrix[5][5]) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j] == 1) {
               
                return abs(i - 2) + abs(j - 2);
            }
        }
    }
    return -1; 
}
 
int main() {
 
    int matrix[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
        }
    }
 
  
    int result = beautiful(matrix);
    cout << result << endl;
 
    return 0;
}