#include<stdio.h>
void main()
{
    int i,j;
    printf("enter the table");
    scanf("%d",&j);
    for(i=1;i<=20;i++)

    {
        printf("%d*%d=%d\n",i,j,i*j);
    }
    getch();
}
