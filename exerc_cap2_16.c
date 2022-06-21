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








