/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Take student details and store in file
    for (i = 1; i <= n; i++) {
        printf("\nEnter details of Student %d:\n", i);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display records
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}