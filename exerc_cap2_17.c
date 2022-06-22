#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float nome[50];
	int idade;
	
	printf("digite seu nome por favor: \n");
	scanf("%s", nome);
	
	printf("informe a sua idade: \n");
	scanf("%d", &idade);
	
  switch (idade)
 {
   case 0 ... 10:
   	printf("%s o valor do plano de saude: R$ 30,00", nome);
    break; 
   case 11 ... 29:
   	printf("%s o valor do plano de saude: R$ 60,00", nome);
    break; 
   case 30 ... 45:
   	printf("%s o valor do plano de saude: R$ 120,00", nome);
    break ;
   case 46 ... 59:
   	printf("%s o valor do plano de saude: R$ 150,00", nome);
    break ;
   case 60 ... 65:
   	printf("%s o valor do plano de saude: R$ 250,00", nome);
    break ;
    
  default:
   printf("%s o seu plano e no valor de: R$ 400,00", nome);
 } 


}
