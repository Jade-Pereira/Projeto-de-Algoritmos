#include<stdio.h>
int main(void){
	int i;
	char nome[15];
	
	printf("Qual o seu nome?");
	scanf("%s", &nome);
	printf("Qual sua idade?");
	scanf("%d", &i);
	if(i>18){
		printf("Parabens %s! Ja pode ser preso.",nome);
	}else{
		printf("%s voce ainda e o nenem da mamae",nome);
	}
	
 return(0);
}
