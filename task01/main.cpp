#include <iostream>
using namespace std;
bool localMin(int matrix[][100], int N, int M, int i, int j);
int main() {
    int n, m;
    cout << "input size of matrix (n and m): ";
    cin >> n >> m;

    int matrix[100][100];
    cout << "input elements of matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    int lastr = -1, lastc = -1, lastv = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (localMin(matrix, n, m, i, j)) {
                lastr = i;
                lastc = j;
                lastv = matrix[i][j];
            }
        }
    }

    if (lastr != -1)
        cout << "the last local minimum has coordinates["
        << lastr + 1 << ";" << lastc + 1
        << "] and it matters " << lastv << ".\n";
    else
        cout << "yhe matrix has no local minima.\n";

    return 0;
}
