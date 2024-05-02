#include <stdio.h>

enum state {working=0, failed, freezed};
enum state current = 2;

enum state find_state()
{
    return current;
}

int main()
{
    (find_state()==working)?printf("Working\n"):printf("not working\n");
    return 0;
}