#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("students.csv", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    if (ftell(fp) == 0) {
        fprintf(fp, "RollNo,Name\n");
    }
    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", name);  

        fprintf(fp, "%d,%s\n", roll, name);
        
        printf("Record added successfully!\n");
        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("All records saved in students.csv (open in Excel).\n");

    return 0;
}