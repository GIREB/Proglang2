#include <stdio.h>

enum sanfoundry {a,b,c};
enum sanfoundry g;

int main(){
    g++;
    printf("%d\n",g);
    printf("%d\n",c);
    return 0;
}