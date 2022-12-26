#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int addition(int x,int y){
    int a=x+y;

    return a;
    }
    int main(){
        int x,y,c;
        printf ("donner 2 number:\n");
        scanf("%d %d",&x,&y);
         c= addition(x,y);
        printf("la soumme est:%d ",  c);
        return 0;
    }