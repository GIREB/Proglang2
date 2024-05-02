#include <stdio.h>

enum days {sunday=1, tuesday, wednesday, thursday, friday, saturday};

int main()
{
    enum days d;
    d = thursday;
    printf("Thursday is the %dth day of the week\n", d);
    return 0;
}