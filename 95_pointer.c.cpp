// structure with data members 
#include <stdio.h>
/*WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER 
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE  A STRUCTURE POINTER AND AN 
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND 
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY. */
#include <stdio.h>

// Define the structure to store employee details
struct Employee {
    int empNumber;
    char name[50];
    float basicPay;
};

int main() {
    struct Employee employ[50]; 
    struct Employee *ptr;      
    int n;                      

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Check if the number of employees is within the limit (50)
    if (n > 50) {
        printf("Cannot enter more than 50 employees.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        ptr = &employ[i];  

        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &ptr->empNumber);

        printf("Employee Name: ");
        getchar();
        fgets(ptr->name, sizeof(ptr->name), stdin);  
        ptr->name[strcspn(ptr->name, "\n")] = '\0'; 

        printf("Basic Pay: ");
        scanf("%f", &ptr->basicPay);
    }

    printf("\nList of Employees:\n");
    printf("-------------------------------------------------\n");
    printf("Employee Number | Employee Name            | Basic Pay\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        ptr = &employ[i];
        printf("%-16d | %-24s | %.2f\n", ptr->empNumber, ptr->name, ptr->basicPay);
    }

    return 0;
}

