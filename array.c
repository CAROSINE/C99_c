#include<stdio.h>

int main()
{
    int number[100],i,n, max,min,index;

    printf("Enter the no. of elements of an array = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&number[i]);

    printf("The elements are = ");
    for(i=0;i<n;i++)
        printf("%d ",number[i]);

    max = number[0];
    min = number[0];
    for(i=1;i<n;i++)
    {
        if(max<number[i])
            max = number[i];
    }
    for(i=1;i<n;i++)
    {
        if(min>number[i])
            min = number[i];
    }
    printf("\nThe largest number = %d",max);
    printf("\nThe Smallest number = %d",min);

    printf("\nWhich index you wish to delete =");
    scanf("%d",&index);

    for(i=index;i<n;i++)
        number[i]=number[i+1];

    number[n-1]=0;


    printf("The elements after delete = ");
    for(i=0;i<n;i++)
        printf("\n%d",number[i]);
}

