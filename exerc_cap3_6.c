#include <stdio.h>

int main()
{
   int i,n1=0,n2=1,soma;
   
   for(i=1;i<=20;i++)
{
    soma=n1+n2;
    n1=n2;
    n2=soma;
    printf("%d\n",n1);
}
	
}

//nao ficou claro essa questao da fibo
