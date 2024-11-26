/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE 
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING 
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int PassedStudents(struct Student students[], int n) {
    printf("\nStudents who scored greater than 500:\n");
    for(int i = 0; i < n; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    int n = 10;

   for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }

    PassedStudents(students, n);

    return 0;
}

