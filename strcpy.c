
#include <stdio.h>
#include <string.h>
int main ()
{
    char str1 [ 30], str2[50];
    int i;
    gets (str1);
    i= strlen (str1);
    printf("%d\n",i);
    strcpy(str2,str1);
    puts( str1);
    strrev(str1);
    puts(str1);
    strcmp(str1,str2);
    if (strcmp(str1,str2)==0){
        printf("these are equal\n");
    }
    else {
        printf("these are not equal\n");
    }
    return 0;
}
