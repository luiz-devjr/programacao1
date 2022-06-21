#include <stdio.h>
//programa com IF e ELSE

int main ()
{
	float nota1,nota2,media,prova_final;
	char nome [50];
  
  printf("informe o nome do aluno:\n");
  scanf ("%s", nome);
  
  printf("informe a primeira nota do aluno: \n");
  scanf("%f", &nota1);
  printf("informe a segunda nota do aluno: \n");
  scanf("%f", &nota2);
  
  media = (nota1 + nota2)/2;
  
  
  if (media >= 7)
   printf(" ******** APROVADO ******");
  
  else if (media < 7 && media > 3)	 
   printf ("------ EM PROVA FINAL -----  \n");
   
  
   printf ("\n\n informe sua nota da prova final:  \n");
   scanf ("%f", &prova_final);
  
   if (prova_final < 3)
   printf("\n ------ REPROVADO -----\n");	
   
  else 
   printf(" \n ******* APROVADO *******");
}


















