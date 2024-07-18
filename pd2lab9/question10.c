#include <stdio.h>

enum sanfoundry{a,b,c=5};

int main(){

    enum sanfoundry s;
    s=b;//ı changed like this.
    printf("%d",s);
    return 0;
}

