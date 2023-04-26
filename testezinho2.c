#include <stdio.h>
 
int main(void)
{
  
   char nome[20];
    int i ; 
 
    printf("Informe seu nome: "); 
	scanf("%s", &nome);
	
	printf("Informe a sua idade: "); 
	scanf("%d", &i);
	
	if (i >= 18)
	{	
		printf("Parabens, ja pode ser preso!!");
	}else 
	{	
		printf("Nenem da mamae!!");
    }
 
   
 
 return(0);
}

