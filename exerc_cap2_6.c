#include <stdio.h>
 
 int main()
{
  float salario=0,prestacao=0,resultado=0;
  
  printf("informe seu salario:\n");
  scanf("%f",&salario);
  
  printf("informe o valor da prestacao:\n");
  scanf("%f",&prestacao);
  
  resultado = salario*0.3;
  
  
  printf ("valor da prestacao:%.2f\n", resultado);
  
 if (prestacao <= resultado)
  printf ("parabens,o emprestimo sera concedido!!!\n\n");
 else 
  printf ("desculpas mas o emprestimo nao pode ser concedido\n");  

}
