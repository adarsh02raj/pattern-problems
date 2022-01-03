#include<stdio.h>
int main()
{
    int n=5,i,j,k,temp=0;
    for(i=0; i<2*n; i++)
    {
        if(i<5){//if starter
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(k=n-i; k>0; k--){
            printf("* ");
        }
        printf("\n");
        }//if closure
        //another if starter
        if(i>4){
        temp++;
        for(j=0; j<=n-temp-1; j++){
            printf(" ");
        }
        for(k=0; k<temp; k++){
            printf("* ");
        }
        printf("\n");
        }//if closure
    }
}
