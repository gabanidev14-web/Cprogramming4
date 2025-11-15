#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fpr,*fpw;
    fpr=fpw=NULL;
    int ch;
    if((fpr=fopen("myfirststfl.dat","r"))==NULL){
        printf("Sorry! Cannot open a file \n");
        exit(0);
    }
    if((fpw=fopen("mysecondstfl.dat", "w"))==NULL){
        printf("Sorry! Cannot open a mysecondfile.dat\n");
        fclose(fpr);
        exit(0);
    }
    ch=fgetc(fpr);
    while(ch!=EOF){
        printf("%c",ch);
        fputc(ch,fpw);
        ch=fgetc(fpr);
    }
    fclose(fpr);
    fclose(fpw);
    printf("File copied successfully.\n");
    return 0;
}