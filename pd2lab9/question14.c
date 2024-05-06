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

void printbook(struct books book){
    printf("book title:%s\n",book1.title);
    printf("book author:%s\n",book1.author);
    printf("book subject:%s\n",book1.subject);
    printf("book_id:%d\n",book1.book_id);
}

int main(){

    strcpy(book1.title,"can in wonderland");
    strcpy(book1.author,"can");
    strcpy(book1.subject,"my real life");
    book1.book_id=1453;

    

    strcpy(book2.title,"an engineer lifes in one day");
    strcpy(book2.author,"can");
    strcpy(book2.subject,"mylife");
    book2.book_id=1071;

    printbook(book2);

    return 0;
}
