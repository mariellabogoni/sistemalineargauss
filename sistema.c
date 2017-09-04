#include <stdio.h>
void imprime(float m1[5], float m2[5], float m3[5], float m4[5])
{
	int i;

	for(i=0;i<5;i++)
	{
		printf("%.1f \t", m1[i]);
	}
	printf("\n");

	for(i=0;i<5;i++)
	{
		printf("%.1f \t", m2[i]);
	}
	printf("\n");

	for(i=0;i<5;i++)
	{ 
		printf("%.1f \t", m3[i]);
	}
	printf("\n");

	for(i=0;i<5;i++)
	{
		printf("%.1f \t", m4[i]);
	}
	printf("\n");
}
main()
{     
	float l1[5], l2[5], l3[5], l4[5], lk[5];
	float pivo, x1, x2, x3, x4;
	int i;


	//--------------CRIANDO A MATRIZ
	
	printf("Criando a matriz relativa ao sistema:\n\n");
	for(i=0;i<5;i++)
	{
		printf("Elemento [0][%d]: ", i);
		scanf("%f", &l1[i]);

	}
	for(i=0;i<5;i++)
	{
		printf("Elemento [1][%d]: ", i);
		scanf("%f", &l2[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Elemento [2][%d]: ", i);
		scanf("%f", &l3[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Elemento [3][%d]: ", i);
		scanf("%f", &l4[i]);
	}
	printf("\nMatriz do sistema: \n");
	imprime(l1,l2,l3,l4);
	

//--------------------ZERANDO O PRIMEIRO ELEMENTO DA SEGUNDA LINHA

	printf("Zerando primeiro elemento...\n\n");

	if(l1[0]!=0)
	{
		pivo = l2[0]/l1[0];

		for(i=0;i<5; i++)
		{
			l2[i] = l2[i] - pivo*l1[i];
		}
	}
		
	else
	{
		for(i=0;i<5;i++)
                {
			lk[i] = l1[i];
		}
		for(i=0;i<5;i++)
		{
			l1[i] = l2[i];
			l2[i] = lk[i];
		}

	}
	imprime(l1,l2,l3,l4);	
	
}	
