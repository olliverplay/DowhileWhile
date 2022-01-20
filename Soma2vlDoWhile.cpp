#include<stdlib.h>
#include<stdio.h>

main(){
int n1, n2, total=20, valor;	
	
	do{
		printf("Digite o primeiro valor:\n ");
		scanf("%d", &n1);
		
		printf("Digite o segundo valor:\n ");
		scanf("%d", &n2);
		
		valor = (n1+n2);
		printf("Valor da Soma: %d \n", valor);
		
		system("pause");
		system("cls");
	}
	while(valor <= total);
	
	
}
