#include <stdio.h>

enum sanfoundry{a=1,b};

enum sanfoundry1{c,d};

int main(){

    enum sanfoundry s1=c;
    enum sanfoundry1 s=a;
    enum sanfoundry s2=d;
    printf("%d %d %d",s1,s,s2);
}