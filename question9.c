#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            printf(" %d ", arr2[j++]);
            i++;
        }
    }
}
int main()
{
    int arr1[100] ;
    int arr2[100] ;
     int n1,n2 ,i,m,n;
   printf ("donner la taille de tableau 1: \n");
   scanf("%d",&n1);
    printf ("donner la taille de tableau 2: \n");
   scanf("%d",&n2);
   printf ("remplissage de tableau 1: \n");
   for(i=0;i<n1;i++){
        printf("donner element %d",i+1);
       scanf("%d",&arr1[i]);
   }
   printf ("remplissage de tableau 2: \n");
   for(i=0;i<n2;i++){
       printf("donner element %d \n",i+1);
       scanf("%d",&arr2[i]);
   }
    printIntersection(arr1, arr2, m, n);
     getchar();
    return 0;
}

int main(){
    int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printIntersection(arr1, arr2, m, n);
    
    return 0;
}

}