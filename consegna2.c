#include <stdio.h>

int main(){
    float num1, num2, mean;
    printf("\nDigiti il primo numero:\n");
    scanf("%f.", &num1);
    printf("\nOra mi dia il secondo numero:\n");
    scanf("%f", &num2);

    mean = (num1 + num2) / 2;

    printf("\nBrrr \ncalcolo... \ncalcolo... \ncalcolo... \npipipi... \nDING! \nLa media aritmetica di %.1f e %.1f è %.2f\n", num1, num2, mean);
    
    return 0;
}