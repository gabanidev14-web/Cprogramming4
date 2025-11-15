#include <stdio.h>
#include <string.h>

struct cricketer {
    char name[50];
    int age;
    int matches;
    float avg_runs;
};

int main() {
    struct cricketer c[10], temp;
    int i, j;
    printf("Enter details of 10 cricketers:\n");
    for (i = 0; i < 10; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: ");
        gets(c[i].name);
        // fgets(c[i].name, sizeof(c[i].name), stdin);
        // c[i].name[strcspn(c[i].name, "\n")] = '\0'; 
        printf("Age: ");
        scanf("%d", &c[i].age);
        printf("Number of test matches played: ");
        scanf("%d", &c[i].matches);
        printf("Average runs per match: ");
        scanf("%f", &c[i].avg_runs);
    }
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (c[j].avg_runs > c[j + 1].avg_runs) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
    printf("\nCricketers sorted by ascending average runs:\n");
    for (i = 0; i < 10; i++) {
        printf("\nName: %s\n", c[i].name);
        printf("Age: %d\n", c[i].age);
        printf("Matches: %d\n", c[i].matches);
        printf("Average Runs: %.2f\n", c[i].avg_runs);
    }
    return 0;
}
