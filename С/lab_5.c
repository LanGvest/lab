#include <stdio.h>

/*
Swap elements of J and K columns of the [MxN] matrix.
*/

int main() {
    int m, n, _j, _k, _a;
    printf("The number of rows of the matrix: ");
    scanf("%d", &m);
    printf("Number of columns of the matrix: ");
    scanf("%d", &n);
    int a[m][n];
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        printf("a(%d,%d): ", i+1,j+1);
        scanf("%d", &a[i][j]);
    }
    printf("\nMatrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\ncolumn 1: ");
    scanf("%d", &_j);
    printf("column 2: ");
    scanf("%d", &_k);
    _j--;
    _k--;
    for(int i = 0; i < m; i++) {
        _a = a[i][_j];
        a[i][_j] = a[i][_k];
        a[i][_k] = _a;
    }
    printf("\nResult:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}
