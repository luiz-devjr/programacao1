#include <stdio.h>
 
 int main()
{
  float num1,num2,num3;
  
  printf("digite o primeiro numero:\n");
  scanf("%f", &num1);
  printf("digite o segundo numero:\n");
  scanf("%f", &num2);
  printf("digite o terceiro numero:\n");
  scanf("%f", &num3);
  
  if (num1 > num2 && num1 > num3)
  printf(" %2.f eh o maior entre %2.f e %2.f", num1,num2,num3);
  if (num2 > num1 && num2 > num3)
  printf(" %2.f eh o maior entre %2.f e %2.f", num2,num1,num3);
  if (num3 > num2 && num3 > num1)
  printf(" %2.f eh o maior entre %2.f e %2.f", num3,num1,num2);
   

}
