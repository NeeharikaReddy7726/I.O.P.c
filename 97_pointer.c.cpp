//A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER. 

#include <stdio.h>

int countVowels(const char *str) {
    int count = 0;

    while (*str != '\0') {
        if (*str == 'a'|| *str == 'e'|| *str == 'i'|| *str == 'o'|| *str == 'u'|| *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char string[100];

    printf("Enter a string: ");
    gets(string);

    int vowelCount = countVowels(string);

    printf("Number of vowels in the string is %d\n", vowelCount);

    return 0;
}

