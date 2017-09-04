#include <stdio.h>
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
}	
