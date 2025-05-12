#include <iostream>
using namespace std;
bool localMax(int matrix[][100], int N, int M, int i, int j);
int main() {
    int N, M;
    cout << "input size of matrix (n and m): ";
    cin >> N >> M;

    int matrix[100][100];
    cout << "input elements of matrix:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    int minv = -1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (localMax(matrix, N, M, i, j)) {
                if (minv == -1 || matrix[i][j] < minv)
                    minv = matrix[i][j];
            }
        }
    }

    if (minv != -1)
        cout << "the minimum maximum among all local maxima: " << minv << ".\n";
    else
        cout << "there are no local maxima in the matrix..\n";

    return 0;
}
