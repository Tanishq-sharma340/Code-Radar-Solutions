#include <stdio.h>


int main() {
    float num1;
    float num2;
    scanf("%f %f", &num1, &num2);
    float num3 = num1 * num2;
    printf("Product: %.2f\n", num3);
    return 0;
}
