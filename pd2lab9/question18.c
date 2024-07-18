#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentinfo
{
    char *name;
    int age;
};
int main(){
    int numofStudents;
    printf("enter the number of students\n");
    scanf("%d",&numofStudents);

    struct studentinfo *info=(struct studentinfo*)malloc(sizeof(struct studentinfo));
    if (info==NULL)
    {
        printf("the memory allocation is failed.");
        return 1;
    }
    for (int i = 0; i < numofStudents; i++)
    {
        char samename[30];
        printf("please enter the name of student %d",i+1);
        scanf("%s",samename);

        info[i].name=(char*)malloc((strlen(samename)+1)*sizeof(char));
        if (info[i].name==NULL)
        {
            printf("the me ory allocation is failed\n");
            return 1;
        }
        strcpy(info[i].name,samename);
        printf("enter age of student %d",i+1);
        scanf("%d",&info[i].age);
    }
    printf("\nStudent Informations\n");
    for (int i = 0; i < numofStudents; i++)
    {
        printf("%d.student name:%s\tage:%d",i+1,info[i].name,info[i].age);
        printf("\n");
    }
    for (int i = 0; i < numofStudents; i++)
    {
        free(info[i].name);
    }
    free(info);
    
    return 0;
}
