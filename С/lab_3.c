#include <stdio.h>

/*
Implement a program where it is possible to use the conditional switch operator: output the name of the month by its number.
*/

int main() {
    int index;
    printf("Enter the month number: ");
    scanf("%d", &index);
    switch(index) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
        default: printf("The data was entered incorrectly.");
    }
    return 0;
}
