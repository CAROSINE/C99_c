
#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    double X;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
{
        scanf("%lf", &X);
        int days = 0;
while (X > 1)
      {
        X=X/2;
        days++;
      }
printf("%d dias\n", days);
}

    return 0;
}
