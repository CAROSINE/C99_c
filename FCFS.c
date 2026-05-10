#include<stdio.h>
int main()
{
int n;
printf("Enter the number of processes: ");
scanf("%d",&n);

int process[n],burst[n],arraival[n],completion[n];
int i,j,pos,temp;

for(i=0;i<n;i++)
{
    process[i]=i+1;
    printf("Enter Arrival Time of process %d: ",process[i]);
    scanf("%d",&arraival[i]);
    printf("Enter Burst Time of process %d: ",process[i]);
    scanf("%d",&burst[i]);
    completion[i]=-1;
}

for(i=0;i<n;i++)
{
    pos=i;
    for(j=i+1;j<n;j++)
    {
        if(arraival[pos]>arraival[j])
        {
            pos=j;
        }
    }

    temp=process[i];
    process[i]=process[pos];
    process[pos]=temp;


    temp=arraival[i];
    arraival[i]=arraival[pos];
    arraival[pos]=temp;

    temp=burst[i];
    burst[i]=burst[pos];
    burst[pos]=temp;
}

for(i=0;i<n;i++)
{
    if(i==0)
    {
        completion[i]=arraival[i]+burst[i];
    }
    else
    {

    if(completion[i-1]>arraival[i])
    {
        completion[i]=completion[i-1]+burst[i];
    }
    else
    {
        completion[i]=completion[i]+burst[i];
    }

    }
}

printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\n");
for(i=0;i<n;i++)
{
    printf("%d\t%d\t\t%d\t\t%d\n",process[i],arraival[i],burst[i],completion[i]);
}

    return 0;
}