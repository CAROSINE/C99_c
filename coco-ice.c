#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if (B <= A && C <= A)
    {
    printf("Ice-cream\n");
    }
    else if (B > A && C > A)
    {
    printf("Chocolate\n");
    }
    else
    {
    if (B > C)
    printf("Chocolate\n");
    else
    printf ("Ice-cream\n");
    }
}
