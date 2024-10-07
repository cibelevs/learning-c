//Contar Vogais em uma String
#include<stdio.h>
//#include<string.h>
int main (void)
{
    char nome[50];
    int vogais = 0;
    
    printf("Insira seu nome: ");
    //fgets (nome, sizeof(nome), stdin);
  
    scanf(" %s", nome); 
    
   for (int i = 0; nome[i] != '\0'; i++)
   {
       if (nome[i] == 'a' || nome[i] =='e' ||nome[i] == 'i' ||nome[i] =='o' ||nome[i] =='u')
       {
           vogais++;
       }
   }
    
    printf("O número de vogais no seu nome é: %d", vogais);
    
 return 0;   
}
