#include<stdlib.h>
#include<stdio.h>

main(){
int n=0, v, maior, menor;

printf("Informe um valor:");
scanf("%d", &v);
maior=v;
menor=v;
	do{
		printf("Informe um valor: ");
		scanf("%d", &v);
		if(v > maior){
			maior=v;
		}else{
			if(v < menor){
				menor=v;
			}
		}
		n++;
	}
	while(n < 19);
	printf("Maior valor: %d\n",maior);
	printf("Maior valor: %d\n",menor);
	
	system("pause");	
}
