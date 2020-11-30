#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/*
Perform the fifth task for cases when the memory for a two-dimensional array is allocated dynamically depending on the entered M, N, K
and is correctly released at the end of the program.
*/

int main() {
    int *p, m, n, _j, _k, _a;
    printf("The number of matrix lines: ");
    scanf("%d", &m);
    printf("Кол-во столбцов матрицы: ");
    scanf("%d", &n);
    p = (int*)malloc(m*n*sizeof(int));
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        printf("a(%d,%d): ", i+1,j+1);
        scanf("%d", (p+i*n+j));
    }
    printf("\nМатрица:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) printf("%4d", *(p+i*n+j));
        printf("\n");
    }
    printf("\n1-й столбец: ");
    scanf("%d", &_j);
    printf("2-й столбец: ");
    scanf("%d", &_k);
    _j--;
    _k--;
    for(int i = 0; i < m; i++) {
        _a = *(p+i*n+j);
        *(p+i*n+j) = *(p+i*n+j);
        *(p+i*n+j) = _a;
    }
    printf("\nРезультат:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) printf("%4d", *(p+i*n+j));
        printf("\n");
    }
    free(p);
    return 0;
}

/* The 2nd way */

int main() {
    int **p, m, n, _j, _k, _a;
    printf("Кол-во строк матрицы: ");
    scanf("%d", &m);
    printf("Кол-во столбцов матрицы: ");
    scanf("%d", &n);
    p = (int**)malloc(m * sizeof(int*));
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) {
        printf("a(%d,%d): ", i+1,j+1);
        scanf("%d", &p[i][j]);
    }
    printf("\nМатрица:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) printf("%4d", p[i][j]);
        printf("\n");
    }
    printf("\n1-й столбец: ");
    scanf("%d", &_j);
    printf("2-й столбец: ");
    scanf("%d", &_k);
    _j--;
    _k--;
    for(int i = 0; i < m; i++) {
        _a = p[i][_j];
        p[i][_j] = p[i][_k];
        p[i][_k] = _a;
    }
    printf("\nРезультат:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) printf("%4d", p[i][j]);
        printf("\n");
    }
    free(p);
    return 0;
}
