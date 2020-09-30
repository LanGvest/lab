#include <stdio.h>

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
