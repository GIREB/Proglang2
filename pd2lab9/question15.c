#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
    int age;
    float weight;
    char name[30];
};
int main(){
    struct person *ptr;
    int n;

    printf("enter the number of persons:");
    scanf("%d",&n);

    ptr=(struct person*)malloc(n*sizeof(struct person));

    for (int i = 0; i < n; i++)
    {
        printf("enter first name and age respectively:");
        scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
    }
    printf("displaying information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("name:%s\tage:%d\t",(ptr+i)->name,(ptr+i)->age);
    }
    return 0;
}
