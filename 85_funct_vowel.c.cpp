// FUNCTION TO CHECK WHETHER THE ENTERED CHARACTER IS VOWEL OR NOT
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase for simplicity
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is not a vowel\n", ch);
    }

    return 0;
}

