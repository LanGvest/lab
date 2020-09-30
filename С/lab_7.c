#include <stdio.h>

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
    printf("The number of computers: ");
    scanf("%d", &n);
    struct computer list[n];
    for(int i = 0; i < n; i++) {
        printf("The name of computer %d: ", i+1);
        scanf("%s", &list[i].name);
        printf("Price: ");
        scanf("%f", &list[i].price);
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%s, %.2f\n", list[i].name, list[i].price);
    }
    return 0;
}
