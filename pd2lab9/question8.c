#include <stdio.h>

enum sanfoundry{c=0,d=10,h=20,s=3}a;

int main(){
    a=c;
    printf("size of enum is %d bytes\n",sizeof(a));
    return 0;

}
