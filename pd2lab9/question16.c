#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//additional 14.question 
typedef struct 
{
    float real;
    float imag;
}complex;

complex add_complex(complex c1,complex c2){
    complex result;
    result.real=c1.real+c2.real;
    result.imag=c1.imag+c2.imag;
    return result;
}
int main(){
    complex num1,num2,sum;
    printf("enter the real and imaginary part of the first complex number\n");
    scanf("%f %f",&num1.real,&num1.imag);

    printf("enter the real and imaginary part of the second complex number\n");
    scanf("%f %f",&num2.real,&num2.imag);

    sum=add_complex(num1,num2);

    printf("sum of the complex numbers:%.2f+%.2f\n",sum.real,sum.imag);

    return 0;
}
