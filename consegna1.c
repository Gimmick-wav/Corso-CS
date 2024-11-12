#include <stdio.h>

int main()
{
    int num1, num2, res;
    printf("\nPrimo fattore:\n");
    scanf("%d", &num1);
    printf("\nSecondo fattore:\n");
    scanf("%d", &num2);

    res = num1 * num2;
    printf("\nIl prodotto di %d e %d è %d\n", num1, num2, res);
    return 0;
}