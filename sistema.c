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
	
	
//-------------------------- ZERANDO O RESTANTE DA COLUNA 

	printf("\nZerando o restante da coluna...\n\n");

        if(l3[0]!=0)
	{
		pivo = l3[0]/l1[0];

		for(i=0;i<5;i++)
                { 
			l3[i] = l3[i] - pivo*l1[i];
		}
	}
	else
	{
	}
	if(l4[0]!=0)
	{
		pivo = l4[0]/l1[0];

		for(i=0;i<5;i++)
		{
			l4[i] = l4[i] - pivo*l1[i];
		}
	}
	else
	{
	}
	imprime(l1,l2,l3,l4);


//------------- ZERANDO A SEGUNDA COLUNA

	printf("Zerando a coluna 2...\n\n");
	if(l2[1]!=0)
	{
		pivo = l3[1]/l2[1];

		for(i=0;i<5;i++)
		{
			l3[i] = l3[i] - pivo*l2[i];
		}
	}
	else
	{
		for(i=0;i<5;i++)
		{
			lk[i] = l2[i];

		}
		for(i=0;i<5;i++)
		{
			l2[i] = l3[i];
			l3[i] = lk[i];
		}

	}
	imprime(l1,l2,l3,l4);
	printf("\n");


	if(l4[1]!=0)
	{
		pivo = l4[1]/l2[1];

		for(i=0;i<5;i++)
		{
			l4[i] = l4[i] - pivo*l2[i];
		}
	}
	else
	{
        }
	imprime(l1,l2,l3,l4);

//------------------- ULTIMA COLUNA

	printf("Finalizando o escalonamento...\n\n");

	if(l3[2]!=0)
	{
		pivo = l4[2]/l3[2];

		for(i=0;i<5;i++)
		{
			l4[i] = l4[i] - pivo*l3[i];
		}
	}
	else
	{
		for(i=0;i<5; i++)
		{
			lk[i] = l3[i];
		}
		for(i=0;i<5;i++)
		{
			l3[i] = l4[i];
			l4[i] = lk[i];
		}
	}
	imprime(l1,l2,l3,l4);
	

//------------------SUBSTITUIÇÃO REVERSA

	x4 = l4[4]/l4[3];
	x3 = ( (l3[4] - (l3[3]*x4)) / (l3[2]) );
	x2 = ( (l2[4] - (l2[3]*x4) - (l2[2]*x3) ) / (l2[1]) );
	x1 = ( ( l1[4] - (l1[3]*x4) - (l1[2]*x3) - (l1[1]*x2) ) / l1[0] );
		

//-------------------SOLUÇÃO:

	printf("A solução do sistema é: (%.1f, %.1f, %.1f, %.1f) \n", x1,x2,x3,x4);


		

	
}	
