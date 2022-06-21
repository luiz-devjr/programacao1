//programa com if else
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int idade;
	
	printf("informe a idade do competidor: \n");
	scanf("%d",&idade);
	 
 do {
  printf("idade invalida,por favor digite uma superior ou igual a 5 anos:  \n");
  scanf ("%d", &idade);
}while (idade < 5);

 if ( idade >= 5 && idade <= 7)
  printf ("categoria infantil A");
 
 else if (idade >= 8 && idade <= 10) 
  printf ("categoria infantil B");
 
 else if (idade >= 11 && idade <= 13) 
  printf ("categoria juvenil A");
 
 else if (idade >= 14 && idade <= 17) 
  printf ("categoria juvenil B");
	
  else 
  printf ("Senior");
  	
}

//programa com switch case

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int idade;
	
	printf("informe a idade do competidor: \n");
	scanf("%d",&idade);
	 
 /*do {
  printf("idade invalida:  \n");
  scanf ("%d", &idade);
}while (idade <= 5); esta dando erro,tem que executar duas vezes para funcionar*/

 switch (idade)
 {
  case 5 ... 7:
   printf ("categoria infantil A");
  break;
  
  case 8 ... 10:
   printf ("categoria infantil B");
  break;
  
  case 11 ... 13:
   printf ("categoria juvenil A");
  break;
  
  case 14 ... 17:
   printf ("categoria juvenil B");
  break;
  
   default:
   printf ("Senior");
 }
 
}
