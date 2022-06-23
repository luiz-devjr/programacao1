//meu cerebro ta fritando com essa porra,esta dando erro,todos dao o mesmo valor de imposto
#include <stdio.h>

int main()
{
  int i;
  float salario=0,imposto=0;
  char nome[50];
	
   for (i=0;i<5;i++)
{   printf("informe o nome: ");
	scanf("%s",nome);
	printf("informe o salario: R$");
	scanf ("%f",&salario);
}
   for (i=0;i<5;i++)
 {
    if (salario >= 1300 && salario < 2300)
 {
	imposto = salario * 0.1;
    printf("valor da aliquota do imposto de renda: R$ %2.2f\n",imposto);
 }
    else if (salario >= 2300)
 {
	imposto = salario * 0.15;
    printf("valor da aliquota do imposto de renda: R$ %2.2f\n",imposto);
 }
    
    else 
    printf ("isento de imposto");
}
}
