#include<stdio.h>
#include<string.h>

struct student{
    int rollno;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};
int main()
{
    struct student s[10];
    int i,r,found=0;
    for(i=0;i<10;i++){
        printf("Enter details of student: %d\n",i+1);
        printf("Roll number: \n");
        scanf("%d", s[i].rollno);
        getchar();
        printf("Name: \n");
        gets(s[i].name);
        printf("Course name: \n");
        gets(s[i].course);
        printf("Major subject: \n");
        gets(s[i].major);
        printf("Minor: \n");
        gets(s[i].minor);
    }
    printf("List of students: \n");
    for(i=0;i<10;i++){
        printf("%d.%s\n", i+1,s[i].name);
    }
    printf("Enter roll number: \n");
    scanf("%d", &r);

    for(i=0;i<10;i++){
        if(s[i].rollno==r){
            printf("Student Details\n");
            printf("Roll number: %d", s[i].rollno);
            printf("Name: %d", s[i].name);
            printf("Course Name: %d", s[i].course);
            printf("Major: %d", s[i].major);
            printf("Minor: %d", s[i].minor);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Student not found!");
    }
}