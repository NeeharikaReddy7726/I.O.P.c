//FUNCTION TO CALCULATE LENGTH OF STRING
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);
    printf("The length of the string is: %d\n", length - 1); // Subtract 1 to exclude the newline from fgets

    return 0;
}

