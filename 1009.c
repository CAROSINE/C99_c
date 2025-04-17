#include <stdio.h>

int main()
{
    char name[50];
    double fixedsalary, sales, total;
    scanf("%s", name);
    scanf("%lf", &fixedsalary);
    scanf("%lf", &sales);
    total = fixedsalary + (sales * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
