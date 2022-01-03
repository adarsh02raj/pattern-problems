#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter how many * in a line you want to print: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
