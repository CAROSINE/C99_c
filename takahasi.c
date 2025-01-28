#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N==1)
        {
        printf("Hello World\n");
    }
    else
        {
        int A,B;
        scanf("%d %d", &A,&B);
        printf("%d\n", A+B);
        }
}
