//2021201406
  /*
  declarar variaveis ENTRADA(valores recebidos da semana),SAIDA(gastos da semana),SOMA(caixa do dia)
  
  inicio:
   receber primeira entrada de segunda S e receber a saida de segunda S1
   ler primeira entrada de segunda e S receber a saida de segunda S1
   calcular o caixa do dia somar entrada-saida 
   resultado= entrada-saida
   SE a SOMA for maior que 2000,mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   SENAO soma menor que 500 mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   
   receber primeira entrada de terca T e receber a saida de terca T1
   ler primeira entrada de terca T e receber a saida de terca T1
   calcular o caixa do dia somar entrada-saida
   resultado= entrada-saida
   SE a SOMA for maior que 2000,mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   SENAO soma menor que 500 mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   
   receber primeira entrada de quarta Q e receber a saida de quarta Q1
   ler primeira entrada de quarta Q e receber a saida de quarta Q1
   calcular o caixa do dia somar entrada-saida
   resultado= entrada-saida
   SE a SOMA for maior que 2000,mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   SENAO soma menor que 500 mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   
   receber primeira entrada de quinta QQ e receber a saida de quinta QQ1
   ler primeira entrada de quinta QQ e receber a saida de quinta QQ1
   calcular o caixa do dia somar entrada-saida
   resultado= entrada-saida
   SE a SOMA for maior que 2000,mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   SENAO soma menor que 500 mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   
   receber primeira entrada de sexta SS e receber a saida de sexta SS1
   ler primeira entrada de sexta SS e receber a saida de sexta SS1
   calcular o caixa do dia somar entrada-saida
   resultado= entrada-saida
   SE a SOMA for maior que 2000,mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
   SENAO soma menor que 500 mostrar
   mostrar o valor total ENTRADA
   mostrar o valor total SAIDA
   mostrar o valor do resultado SOMA
  
fim*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float soma,S,S1,T,T1,Q,Q1,QQ,QQ1,SS,SS1;
	soma=0;
	
	printf("digite o valor de entrada de segunda:\n");
	scanf("%f",&S);
	printf("digite o valor de saida de segunda:\n");
	scanf("%f",&S1);
	soma= S-S1;
	printf("valor do caixa do dia:R$ %.2f\n",soma);
	
	if (soma >2000)
	{
		printf("ATENCAO:\n");
		printf("Total de dinheiro recebido: R$ %.2f\n", S);
        printf("Total de pagamentos realizados: R$ %.2f\n", S1);
        printf("Saldo atual:R$ %.2f\n", soma);
	}
    else if (soma <-500) 
	{
        printf("ATENCAO:\n");
        printf("Total de dinheiro recebido:R$ %.2f\n", S);
        printf("Total de pagamentos realizados:R$ %.2f\n", S1);
        printf("Saldo atual: R$ %.2f\n", soma);
        
    }
    
	printf("digite o valor de entrada de terca:\n\n");
	scanf("%f",&T);
	printf("digite o valor de saida de terca:\n");
	scanf("%f",&T1);
	soma= T-T1;
	printf("valor do caixa do dia:R$ %.2f\n",soma);
	
	if (soma >2000)
	{
		printf("ATENCAO:\n");
		printf("Total de dinheiro recebido: R$ %.2f\n", T);
        printf("Total de pagamentos realizados: R$ %.2f\n", T1);
        printf("Saldo atual:R$ %.2f\n", soma);
	}
    else if (soma <-500) 
	{
        printf("ATENCAO:\n");
        printf("Total de dinheiro recebido:R$ %.2f\n", T);
        printf("Total de pagamentos realizados:R$ %.2f\n", T1);
        printf("Saldo atual: R$ %.2f\n", soma);
    }
    
    printf("digite o valor de entrada de quarta:\n");
	scanf("%f",&Q);
	printf("digite o valor de saida de quarta:\n");
	scanf("%f",&Q1);
	soma= Q-Q1;
	printf("valor do caixa do dia:R$ %.2f\n",soma);
	
	if (soma >2000)
	{
		printf("ATENCAO:\n");
		printf("Total de dinheiro recebido: R$ %.2f\n", Q);
        printf("Total de pagamentos realizados: R$ %.2f\n", Q1);
        printf("Saldo atual:R$ %.2f\n", soma);
	}
    else if (soma <-500) 
	{
        printf("ATENCAO:\n");
        printf("Total de dinheiro recebido:R$ %.2f\n", Q);
        printf("Total de pagamentos realizados:R$ %.2f\n", Q1);
        printf("Saldo atual: R$ %.2f\n", soma);
    }
    
    printf("digite o valor de entrada de quinta:\n");
	scanf("%f",&QQ);
	printf("digite o valor de saida de quinta:\n");
	scanf("%f",&QQ1);
	soma= QQ-QQ1;
	printf("valor do caixa do dia:R$ %.2f\n",soma);
	
	if (soma >2000)
	{
		printf("ATENCAO:\n");
		printf("Total de dinheiro recebido: R$ %.2f\n", QQ);
        printf("Total de pagamentos realizados: R$ %.2f\n", QQ1);
        printf("Saldo atual:R$ %.2f\n", soma);
	}
    else if (soma <-500) 
	{
        printf("ATENCAO:\n");
        printf("Total de dinheiro recebido:R$ %.2f\n", QQ);
        printf("Total de pagamentos realizados:R$ %.2f\n", QQ1);
        printf("Saldo atual: R$ %.2f\n", soma);
    }
    
    printf("digite o valor de entrada de sexta:\n");
	scanf("%f",&SS);
	printf("digite o valor de saida de sexta:\n");
	scanf("%f",&SS1);
	soma= SS-SS1;
	printf("valor do caixa do dia:R$ %.2f\n",soma);
	
	if (soma >2000)
	{
		printf("ATENCAO:\n");
		printf("Total de dinheiro recebido: R$ %.2f\n", SS);
        printf("Total de pagamentos realizados: R$ %.2f\n", SS1);
        printf("Saldo atual:R$ %.2f\n", soma);
	}
    else if (soma <-500) 
	{
        printf("ATENCAO:\n");
        printf("Total de dinheiro recebido:R$ %.2f\n", SS);
        printf("Total de pagamentos realizados:R$ %.2f\n", SS1);
        printf("Saldo atual: R$ %.2f\n", soma);
    }
    
	return 0;
}
