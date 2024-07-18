#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
};
struct student getinfo();
int main(){
    struct student s;

    s=getinfo();

    printf("\nDisplaying informations:\n");
    printf("Name:%s\n",s.name);
    printf("Age:%d\n",s.age);

    return 0;
}
struct student getinfo(){
    struct student s1;

    printf("enter name:");
    scanf("%[^\n]%*c",s1.name);

    printf("enter age:");
    scanf("%d",&s1.age);

    return s1;
}
