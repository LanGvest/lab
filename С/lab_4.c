#include <stdio.h>

/*
Implement a program that works with a one-dimensional array of integers (int).
Access to array elements in the program for input, processing, and output must be implemented using pointers.
Find the maximum value among the array elements.
*/

int main() {
    int *p, a[5], max;
    p = a;
    for(int i = 0; i < 5; i++) {
        printf("element %d: ", i+1);
        scanf("%d", p++);
    }
    p = a;
    max = *p++;
    for(int i = 1; i < 5; i++) {
        if (*p > max) max = *p;
        *p++;
    }
    printf("Maximal element: %d", max);
    return 0;
}
