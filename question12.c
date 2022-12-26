
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char str[100], rev[100];
    int t, i, j;
 
    printf(" Entrez une chaîne de caractère : ");
    gets(str);
    
    j = 0;
    t = strlen(str);
 
    rev[t] = '\0'; 
    for (i = t - 1; i >= 0; i--)
    {
      rev[j++] = str[i];
    }
    rev[i] = '\0';
 
    printf(" Chaîne de caractère après inversion = %s", rev);
    
    return 0;
}
 
