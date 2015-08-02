#include<stdlib.h>
#include<stdio.h>
//caraca mané
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
// aqui começa o if

main()
{
	int i;
	printf("informe uma letra");
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
}//fm do programa
