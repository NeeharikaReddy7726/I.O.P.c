/* A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES 
USING POINTERS. */

#include <stdio.h>

int lengthIncludingSpaces(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++; 
    }
    return length;
}

int lengthExcludingSpaces(char *str) {
    int length = 0;
    while (*str != '\0') {
        if (*str != ' ') {  // Skip spaces
            length++;
        }
        str++; 
    }
    return length;
}

int main() {
    char str[100];
                     
    printf("Enter a string: ");
    fgets(str, sizeof(str)); 

    int lenWithSpaces = lengthIncludingSpaces(str);
    int lenWithoutSpaces = lengthExcludingSpaces(str);

    printf("Length including spaces: %d\n", lenWithSpaces);
    printf("Length excluding spaces: %d\n", lenWithoutSpaces);

    return 0;
}

