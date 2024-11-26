
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    // enter input
    printf("Enter a character: ");
    scanf("%c", &c);

// condutind if else to check the conditions

    // whether the character is a capital letter or not
    if (isupper(c)) {
        printf("The character is an uppercase letter.\n", c);
    }
    
    // whether the character is a small letter or not
    else if (islower(c)) {
        printf("The character is a lowercase letter.\n", c);
    }
    
    // whether the character is a digit or not
    else if (isdigit(c)) {
        printf("The character is a digit.\n", c);
    }
    
    // whether the character is a symbol or not
    else if (ispunct(c)) {
        printf("The character is a symbol.\n", c);
    }
    
    // if it not a recognised character
    else {
        printf("The character is not recognized yet.\n", c);
    }

    return 0;
}

