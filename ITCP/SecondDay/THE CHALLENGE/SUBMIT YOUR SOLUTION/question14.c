#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i=0,b=0,p,dig=0,j;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("\nBinary numbers from 1 to %d : ",n);
    for(i=0;i<=n;i++)
    {
        p=0;b=0;dig=0;
        for(p=1,j=i;j>0;j=j/2)
        {
            dig=j%2;
            b=b+(dig*p);
            p=p*10;
        }
        printf("%d\n",b);
    }
    return 0;
}