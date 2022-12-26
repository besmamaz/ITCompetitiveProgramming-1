// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int test(int x,int y){
    if ((x+y)<=100){
        return 1;
    }
    else{ return 0; 
    }
}
int main (){
    int x,y,c;
    printf ("donner 2 number:\n");
        scanf("%d %d",&x,&y);
        c=test(x,y);
        if(c==1)  printf ("true");
        else printf ("false");
        return 0;
     
}