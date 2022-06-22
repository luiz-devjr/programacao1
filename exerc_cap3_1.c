//primeira forma:

#include<stdio.h>

int main()
{
  int num=1,i;
	
	for (i=0;i<100;i++)
{
	 printf(" %d,", num++);
}
	
}

//segunda forma:

#include<stdio.h>

int main()
{
  int num=1,i;
	
	for (i=0;i<100;i++)
{
	 printf("numero: %d\n", num++);
}
	
}
