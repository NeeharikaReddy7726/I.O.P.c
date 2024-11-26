//  WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING. 
#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str != '\0') {
        if (*str != ' ' && !inWord) {
            count++;
            inWord = 1; 
        } else if (*str == ' ') {
            inWord = 0;
        }
        str++;  
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str));

    int wordCount = countWords(str);

    printf("Number of words: %d\n", wordCount);

    return 0;
}

