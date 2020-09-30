#include <stdio.h>
#include <string.h>

/*
Use the combined data type (struct) to implement the program: enter information about computer prices in an array of records and display it as a table.
Enter string values so that you can enter text containing spaces.
*/

struct computer {
    char name[20];
    float price;
};

int main() {
    int n;
    char temp;
    printf("The number of computers: ");
    scanf("%d", &n);
    struct computer list[n];
    for(int i = 0; i < n; i++) {
        printf("The name of computer %d: ", i+1);
        scanf("%c", &temp); // temp statement to clear buffer
        scanf("%[^\n]", &list[i].name);
        printf("Price (USD): ");
        scanf("%f", &list[i].price);
    }
    printf("\n");
    printf("┌────────┬──────────────────────┬─────────────┐\n");
    printf("│ Number │ Name                 │ Price       │\n");
    printf("├────────┼──────────────────────┼─────────────┤\n");
    for(int i = 0; i < n; i++) {
        printf("│ %6d │ %s", i+1, list[i].name);
        for(int j = strlen(list[i].name); j < 20; j++) printf(" ");
        printf(" │ %7.2f USD │\n", i+1, list[i].name, list[i].price);
        printf(i+1 == n ? "└────────┴──────────────────────┴─────────────┘" : "├────────┼──────────────────────┼─────────────┤\n");
    }
    return 0;
}
