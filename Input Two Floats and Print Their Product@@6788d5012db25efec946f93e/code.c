#include <stdio.h>

int maiin(){
    float num1;
    float num2;
    scanf("%f %f ", &num1 ,&num2);
    float num3 = num1*num2;
    printf("Product: .2f",num3);
    return 0;
}