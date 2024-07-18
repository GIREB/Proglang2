#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studentinfoperations
{
    int student_id;
    char wholename[50];
    float midthermresult;
    float finalresult
}students ;

int main(){
    
    students student1;
    int number;
    printf("please,choose what you want to do from the menu?1/2/3/4/5");
    printf("MENU:\n1New registration\n2list registration\n3updating registration\n4calculate class average\n5show info the most succesful student according to average");
    scanf("%d",number);

    if (number==1)
    {
        char studentname[20];
        printf("enter student name you want to register?");
        scanf("%s",studentname);
        strcpy(student1.wholename,studentname);
        
        int numberofstudent;
        printf("enter student number:");
        scanf("%d",numberofstudent);
        strcpy(student1.student_id,numberofstudent);
        printf("student who is registrated is %s and her/his id is:%d",studentname,numberofstudent);
    }
    else if (number==2)
    {
         
    }
    
}

