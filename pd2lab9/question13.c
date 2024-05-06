#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}book1,book2;

int main(){

    strcpy(book1.title,"can in wonderland");
    strcpy(book1.author,"can");
    strcpy(book1.subject,"my real life");
    book1.book_id=1453;

    printf("%s\n %s\n %s\n %d\n",book1.title,book1.author,book1.subject,book1.book_id);

    strcpy(book2.title,"an engineer lifes in one day");
    strcpy(book2.author,"can");
    strcpy(book2.subject,"mylife");
    book2.book_id=1071;

    printf("%s\n %s\n %s\n %d\n",book2.title,book2.author,book2.subject,book2.book_id);

    return 0;
}