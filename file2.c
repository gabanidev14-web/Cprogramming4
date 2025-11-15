#include<stdio.h>
int main()
{
    FILE*fpr=NULL;
    char ch;
    if((fpr=fopen("myfirststfl.dat","r"))==NULL)
    {
        printf("Sorry! File cannot be opened\n");
        exit(1);
    }
    ch=fgetc(fpr);
    while(ch!=EOF){
        // printf("%c",ch);
        fputc(ch,stdout);
        ch=fgetc(fpr);
    }
    fclose(fpr);
    return 0;
}