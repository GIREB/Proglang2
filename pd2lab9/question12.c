#include <stdio.h>
#include <stdlib.h>

struct student
{
    int number;
    char name[20];
    char surname[20];
    int midtermgrade;
};

int main(){

    int i;
    struct student array[10];
    for(i=0;i<3;i++)
    {
        printf("Enter student number: ");
        scanf("%d", &array[i].number); 
        printf("enter name:");
        scanf("%s", array[i].name);
        printf("enter surname:");
        scanf("%s", array[i].surname);
        printf("enter midhtermgrade:");
        scanf("%d",&array[i].midtermgrade);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d %s %s %d\n", array[i].number, array[i].name, array[i].surname, array[i].midtermgrade);
    }
    return 0;
}
