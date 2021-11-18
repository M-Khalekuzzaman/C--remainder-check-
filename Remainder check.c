#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter an integer number :");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if((i%number) == 3)
        {
            printf(" %d ",i);
        }
    }
    getch();
}
