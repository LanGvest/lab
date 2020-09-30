#include <stdio.h>

/*
How many days will the S scholarship last for a student if they spend N dollars a day and their expenses increase by X dollars every day?
The algorithm must be implemented in the program in two ways. Using a FOR and WHILE loop (or DO WHILE).
The choice of the WHILE or DO WHILE loop depends on the algorithm. The loop that allows you to get the optimal code should be used.
*/

int main() {
    float s, n, x;
    int d = 0;
    printf("Scholarship: ");
    scanf("%f", &s);
    printf("Start-up costs: ");
    scanf("%f", &n);
    printf("Coefficient: ");
    scanf("%f", &x);
    // Using FOR
    for(d; s-n >= 0; d++) {
        s -= n;
        n *= x;
    }
    // Using WHILE
    /*
    while(s-n >= 0) {
        s -= n;
        n *= x;
        d++;
    }
    */
    printf("Number of days: %d", d);
    return 0;
}
