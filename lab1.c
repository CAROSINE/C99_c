#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);

    int processes[n], arrival_time[n], execution_time[n], completion_time[n] ;
    int i,j,pos,temp ;

    for(i=0; i<n; i++)
    {
        processes[i] = i+1;
        printf("Enter arrival time and execution time for process %d: ", processes[i]);
        scanf("%d ", &arrival_time[i]);
        printf("Enter execution time for process %d: ", processes[i]);
        scanf("%d", &execution_time[i]);
        completion_time[i] = 1;
    }

    for (i=0; i<n; i++)
    {
        pos = i;
        for (j=i+1; j<n; j++)
        {
            if (arrival_time[j] < arrival_time[pos])
                pos = j;
        }

        temp = arrival_time[i];
        arrival_time[i] = arrival_time[pos];
        arrival_time[pos] = temp;

        temp = execution_time[i];
        execution_time[i] = execution_time[pos];
        execution_time[pos] = temp;

        temp = processes[i];
        processes[i] = processes[pos];
        processes[pos] = temp;
    }
    return 0;
}