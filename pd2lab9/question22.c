#include <stdio.h>

typedef struct complex
{
    float real;
    float image;
}complex;

void addNumbers(complex c1,complex c2,complex *result);

int main(){
    complex c1,c2,result;

    printf("enter for first number the real part:\n");
    scanf("%f",&c1.real);
    printf("enter for first number the image part:\n");
    scanf("%f",&c1.image);

    printf("enter for second number the real part:\n");
    scanf("%f",&c2.real);
    printf("enter for second number the image part:\n");
    scanf("%f",&c2.image);

    addNumbers(c1,c2,&result);
    printf("\nresult.real=%1.f\n",result.real);
    printf("result.image=%.1f",result.image);

    return 0;
}
void addNumbers(complex c1,complex c2,complex *result){
    result->real=c1.real+c2.real;
    result->image=c1.image+c2.image;
}

