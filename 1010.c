#include <stdio.h>

int main() {
    int code1, units1, code2, units2;
    float price1, price2,total_price;
    scanf("%d %d %f", &code1, &units1, &price1);
    scanf("%d %d %f", &code2, &units2, &price2);
    total_price = (units1 * price1) + (units2 * price2);
    printf("VALOR A PAGAR: R$ %.2f\n", total_price);

    return 0;
}
