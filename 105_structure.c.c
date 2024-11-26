/* WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS. 
THE PERMUTATIONS OF THE STRING ARE: ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD 
CBDA CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC
*/ 

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    // If the left index equals the right index, print the string (a permutation)
    if (l == r) {
        printf("%s\n", str);
    } else {
    
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);      
            swap((str + l), (str + i));  
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int n = strlen(str);
    
    printf("The permutations of the string are:\n");
    permute(str, 0, n - 1);

    return 0;
}

