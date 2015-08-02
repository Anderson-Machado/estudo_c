#include<stdlib.h>
#include<stdio.h>

int par(int n)
{   //caraca mane que que e isso
	if(n % 2==0)
	{
	return 1; 	
	}
	else
	{
	return 0;
	}
		
}

main()
{
	int i;
	printf("informe um numero");
	 scanf("%d",&i);
	  if(par(i)==1)
	  {
	  	printf("Par");
	  }
	  else
	  {
	  	printf("Impar");
	  }
	  
	system("pause");
}
