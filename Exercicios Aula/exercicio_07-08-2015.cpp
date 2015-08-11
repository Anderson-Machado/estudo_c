/*
DADO UMA FAIXA DE VALORES, CUJO O VALOR INICIAL E O VALOR FINAL DEVERÃO SER FORNECIDO PELO USUARIO, IDENTIFIQUE:
A- QUANTIDADE DE NUMEROS INTEIROS E POSITIVO
B- QUANTIDADE DE NUMEROS PARES
C- QUANTIDADE DE NUMEROS IMPARES
D-QUANTIDADE DE NUMEROS DIVISIVEIS POR 3 E 4 AO MESMO TEMPO
E- A RESPECTIVA MEDIA PARA CADA UNS DOS ITENS
*/
#include<stdio.h>
#include<stdlib.h>

main()
{    
    int ini, fim,sp=0, spar=0, simpar=0, par=0, impar=0,sdiv=0, div=0, cont=0,cont1=0,pos=0;
    float media;
	printf("Informe o valor inicial");
     scanf("%d",&ini);
      printf("informe o valor final");
       scanf("%d",&fim);
        
        for(ini; ini<fim;ini++)
        {   
            if(ini>=0)//verificando a quantidade de numeros positivos
            {
        	pos++;
        	sp+=ini;
            }
        	if(ini % 2==0)//verificando a quantidade de numeros pares
        	{
        		par++;
        		spar+=ini;
        		//acumular para media aqui
        	}
        	else// verificando a quantidade de numeros impares
        	{
        		impar++;
        		simpar+=ini;
        		//acumular para media aqui
        	}
        	
           if((ini % 3 == 0)&&(ini % 4 ==0))
        	{
        		sdiv++;
        		div+=ini;
        	}
        	
		}
        /*float mp = sp/pos;
        float mpar= spar/par;
        float mimpar = simpar/impar;
        float mdiv = sdiv/div;
        */
		//falta colocar as médias
        printf("numeros positivos encontrados:%d\n",pos);
		printf("Numeros pares:%d\n",par);
        printf("Numeros impares:%d\n",impar);
        printf("Numeros divisiveis por 3 e 4 ao mesmo tempo:%d\n",impar);
        /*
		printf("media maior positivo\n:%f",mp);
        printf("media numeros pares:%f\n",mpar);
        printf("media numeros impares:%f\n",mimpar);
        printf("media multiploes de 3 e 4 :%f\n",mdiv);
    */
    
    system("pause");
}
