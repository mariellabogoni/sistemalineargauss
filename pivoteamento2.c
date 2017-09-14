#include <stdio.h>
#include <stdlib.h>
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
int pivoteamento(double **M, int dim)
{    int i,j;
     float **aux;
       
     
     
     for(j=0;j<dim+1;j++)
     {    
         if(M[0][j]<M[1][j])
         {   aux[0][j] = M[0][j] ;
             M[0][j] = M[1][j];
             M[1][j] = aux[0][j];
             
             
         }    
     
     }
                
}
float determinante(double **M, int cont, int dim)
{    int i,j;
     float det=1;
     
     for(i=0;i<dim;i++)
     {   for(i=0;i<dim;i++)
         {   
             if(i=j)
             {   det = M[i][j]*det;
             }
         }
     }
     if(cont%2==0)
     {    return(det);
     }
     else
     {    return((-1)*det);
     }
}     
     
            
    
main()
{   
    int i,j, dim,c;
    float det;
    double **M, m;
    FILE *leitura;
    
    leitura=fopen("matriz.dat","r");
    i = fscanf(leitura, "%d", &dim);
 
 
   M = malloc( dim*sizeof(double*));
   for(i=0;i<dim; i++)
   {    M[i] = malloc((dim+1)*sizeof(double));
   }
   
   i=j=0;
   
   while( fscanf(leitura, "%lf", &m) != EOF)
   {   M[i][j] = m;
       j++;
       
       if(j==dim+1)
       {   j=0;
           i++;
       }
  }
  imprime(M, dim);
  
  pivoteamento(M, dim);
  
  printf("\nMatriz pivoteada:\n");
  imprime(M, dim);
  
  det=determinante(M,c,dim);
  printf("\nDeterminante: ", det);
  
  
  
}  
  
           
        
  
