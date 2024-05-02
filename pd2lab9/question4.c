#include <stdio.h>

enum example {a=1,b=2,c};
enum example example1=2;

enum example answer(){
    return example1;
}

int main(){

    (answer()==a)?printf("yes\n"):printf("no\n");
    return 0;
}