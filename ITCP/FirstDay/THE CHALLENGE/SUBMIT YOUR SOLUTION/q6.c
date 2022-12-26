#include <stdio.h>
#include<stdlib.h>
typedef struct liste{
    int val;
    struct liste*suiv;
}*liste;
liste*ajouter(liste*,int )
void main(){ 
    liste *p,*q,*tete,*q;
    int i,n;
     printf("remplir la liste :\n");
    printf("donner la taille de votre liste :");
    for (i =0,i<n,i++){
        p=(struct liste *)malloc(sizeof(struct liste));
        printf("donner la valeur :\n");
        scanf("%d",&p->val);
        if (p==null){
            tete=p;
            
           
            
        }
        else{
             p->suiv=tete;
             p=tete;
        }
        tete->suiv=null;
    }
    printf("le traitement :");
    while(p<>null){
        q=p->suiv;
        if (p->val==q->val){
            r=q->suiv;
            p->suiv=r;
            q->suiv=null;
            free(q);
        }
        p=p->suiv;
    }
    printf("affichage de la liste:\n");
    p=tete;
    while (p<>null){
        printf(p->val",");
    }


   

}
