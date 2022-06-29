#include <stdio.h>
 
 int main()
{
  int a=0,divisao=0;
  
  printf ("digite um numero:\n");
  scanf("%d",&a);
  
  divisao = a/3;
  
  printf("resultado: %d\n",divisao);

 if (a% 3==0)
  printf("o numero eh divisivel por 3\n");
 else 
 printf ("nao eh divisivel por 3\n");

 if (a% 7==0)
  printf("o numero eh divisivel por 7\n");
 else 
 printf ("nao eh divisivel por 7\n");
}
