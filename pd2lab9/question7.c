#include <stdio.h>

enum day{a,b,c=5,d,e};

int main(){
    printf("enter the value for a");
    int a;
    scanf("%d", &a);
    printf("%d\n",a);
    return 0;
}