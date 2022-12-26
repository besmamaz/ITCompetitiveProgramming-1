#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int  main(){
    int A[];
    int E,x,n,i;
    printf("donner la taille de tableau:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("donner les element de tableau\n");
        scanf("%d",&A[i]);
    }
    E=1;
    while(E==1){
        E=0;
        for(i=0;i<n-1;i++){
            if(A[i]>A[i+1]){
                x=A[i];
                A[i]=A[i+1];
                A[i+1]=x;
                E=1;
            }
        }
    }
    printf("affichage de tableau:\n");
    for(i=0,i<n-1,i++){
        printf(A[i]"\n");
    }
 return 0;
}