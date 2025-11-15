#include<stdio.h>
int main()
{
    FILE*fpw=NULL;
    char ch;

    fpw = fopen("myfirststfl.dat", "w");
    if (fpw == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter the details. End with # sign:\n");

    ch = getchar();
    while (ch != '#') {
        fputc(ch, fpw);
        ch = getchar();
    }

    fclose(fpw);
    printf("\nThe data has been successfully written to the file.\n");

    return 0;
}