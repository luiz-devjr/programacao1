#include <stdio.h>
 
 int main()
{
  int nascimento,ano_atual,resultado;
  
  printf ("informe em que ano voce nasceu:  ");
  scanf("%d", &nascimento);
 
 if  (nascimento > 1900)
  printf (" ano validado");
 
 else
   do {
    printf(" ano invalido,digite novamente: \n");
    scanf("%d", &nascimento);
   }while (nascimento < 1900);
  
  printf (" informe o ano atual:  ");
  scanf ("%d", &ano_atual);
  
 if  (ano_atual > 1900)
  printf (" ano validado");
 
 else
  do {
    printf(" ano invalido,digite novamente: \n");
    scanf("%d", &ano_atual);
   }while (ano_atual < 1900);
  
  resultado = ano_atual - nascimento;
  
  printf ("sua idade eh: %d anos", resultado);
  
}
