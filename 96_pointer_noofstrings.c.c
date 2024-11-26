//A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING 
//POINTERS.
#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    char *arr[n];

    // Allocate memory and read the strings
    printf("Enter the strings:\n");
    for(int i = 0; i < n; i++){
        arr[i] = (char *)malloc(100 * sizeof(char));
        getchar();
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';  
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                swap(arr[i], arr[j]); 
            }
        }
    }

    printf("\nSorted strings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]); 
    }

    return 0;
}

