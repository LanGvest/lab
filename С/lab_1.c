#include <stdio.h>

/*
Implement a program that evaluates an integer expression: A<<=~B*--C (types: unsigned char, int, short int).
The program should ask the user for the values of variables A, B, and C.
Calculate the specified expression and display the values of the changed A, B, and C again.
*/

int main() {
    unsigned char a;
    int b;
    short int c;
    scanf("%u", &a);
    scanf("%d", &b);
    scanf("%hi", &c);
    a<<=~b*--c;
    printf("%u, %d, %hi", a, b, c);
    return 0;
}
