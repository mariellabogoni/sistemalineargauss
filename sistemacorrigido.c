#include <stdio.h>
#include <stdlib.h>
void ler(double **M, int dim, FILE*leitura)
{	int i, j;
    double a;	 

	for (i=0; i<dim; i++) 
	{
	 	M[i] = malloc((dim+1)*sizeof(double));	
	}
	 
	i = j = 0;
	while(fscanf(leitura, "%lf", &a) != EOF) 
	{
		M[i][j] = a;
	 	j++;
	 	if(j==dim+1) 
	 	{	j=0; i++;	}
	
	}

}
void imprime(double **M, int dim)
{  int i, j;

   for(i=0;i<dim;i++)
   {   for(j=0;j<dim+1;j++)
       {    printf("%lf\t" , M[i][j]);
       }
       printf("\n");
   }
   printf("\n");
}       
void escalonamento(double **M, int dim)
{
	int i, j, v;
	double pivo;
	
	//Fazendo o escalonamento
	for(v=0; v<dim-1; v++)
	{
		for(i=v+1; i<dim; i++)
		{
			pivo = (M[i][v] / M[v][v]);

			for(j=v; j<dim+1; j++)
				M[i][j] = M[i][j] - (pivo * M[v][j]);
		}	
	}
	
}
void substituicaoReversa(double **M, int dim)
{   
    double x1, x2, x3, x4;
    
    x4 = M[3][4]/M[3][3];
    x3 = ( M[2][4] - (M[2][3]*x4) ) / M[2][2];
    x2 = ( M[1][4] - (M[1][3]*x4) - (M[1][2]*x3) ) / M[1][1];
    x1 = (M[0][4] - (M[0][1]*x2) - (M[0][2]*x3) - (M[0][3]*x4) ) / M[0][0];

    printf("\nA Solução do sistema é: (%.1f,%.1f,%.1f,%.1f)\n", x1,x2,x3,x4);

}   
int main(int argc, char *argv[])

{   int i,j, dim;
    double **M, a;
    FILE *leitura;
    
    
    leitura = fopen(argv[1],"r");
    i = fscanf(leitura, "%d", &dim);
    M = malloc( dim*sizeof(double*));
    
    ler(M,dim,leitura);
	
	printf ("\nA matriz fornecida é:\n");
	imprime(M, dim);
	escalonamento(M,dim);
	
	printf ("\nA matriz Escalonada é:\n");
	imprime(M, dim);
	
	substituicaoReversa(M,dim);
	
	
}	
