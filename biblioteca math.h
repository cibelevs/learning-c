#include<stdio.h>
#include<math.h>
int main (void)
{
    double num; 
    
    printf("Insira um número: ");
    scanf(" %lf", &num);
    
    printf ("A raiz de %lf é igual a: %lf", num, sqrt (num));
    
    return 0;
}
