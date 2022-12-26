#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Leap(int x){
    if(x %4==0)&&((x %100<>0)||(x %400==0)){
        return 1;
    }
    else{ return 0;}

}
int  main(){
    int year,x;
    do{
        printf("entrer l'années:");
        scanf("%d",&year);
    }while((year>0)&&(year<3000));
     x=Leap(year);
     if (x==1){printf("leap year");}
     else{printf(" not leap year");}
 return 0;
 }