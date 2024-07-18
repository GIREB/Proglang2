#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
};
void display(struct student s){
    printf("\nDisplaying informations:\n");
    printf("%d\n",s.age);
    printf("%s\n",s.name);
}
int main(){
    struct student s1;

    printf("enter name:\n");
    scanf("%[^\n]%*c",s1.name);

    printf("enter age:\n");
    scanf("%d",&s1.age);

    display(s1);

    return 0;
}
