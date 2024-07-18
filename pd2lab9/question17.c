#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char wholename[40];
    int student_id;
    float gpa;

}studentinfo;
int main(){
    studentinfo students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter respectively infos for student %d:\n",i+1);
        scanf("%s %d %f",students[i].wholename,&students[i].student_id,&students[i].gpa);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %.2f",students[i].wholename,students[i].student_id,students[i].gpa);
        printf("\n");
    }
    
    return 0;
}