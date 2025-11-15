#include<stdio.h>
#include<string.h>

struct studentdata{
    int rollno;
    char name[50];
    float phy,math,chem,total;
};
int main(){
    struct studentdata s;
    printf("Enter roll number: \n");
    scanf("%d", &s.rollno);
    getchar();
    printf("Enter name: \n");
    gets(s.name);
    printf("Enter physics marks: \n");
    scanf("%f", &s.phy);
    printf("Enter maths marks: \n");
    scanf("%f", &s.math);
    printf("Enter chemistry marks: \n");
    scanf("%f", &s.chem);
    s.total=s.phy+s.math+s.chem;
    printf("Student Detail\n");
    printf("Roll number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Physics: %.2f\n", s.phy);
    printf("Maths: %.2f\n", s.math);
    printf("Chemistry: %.2f\n", s.chem);
    printf("Total marks: %.2f\n", s.total);
    return 0;
}
