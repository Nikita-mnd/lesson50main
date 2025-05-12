#include <iostream>

using namespace std;

bool localMax(int matrix[][100], int N, int M, int i, int j) {
    int value = matrix[i][j];

    if (i > 0 && matrix[i - 1][j] >= value) { 
        return false; 
    }
    if (i < N - 1 && matrix[i + 1][j] >= value) {
        return false;
    }
    if (j > 0 && matrix[i][j - 1] >= value) {
        return false;
    }
    if (j < M - 1 && matrix[i][j + 1] >= value) {
        return false;
    }

    return true;
}