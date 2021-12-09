#include <stdio.h>
#include <stdlib.h>

int main ()
{
		float salario, reajuste, salario_novo;
		
	printf("Empresa: Perfumaria e Cosmeticos\n");
	printf("Nome Completo: Jenifer Kelen Ventura dos Santos\n");
	printf("RA: 21140993-5\n");
	printf("#################################################################\n");
	printf("Digite seu ultimo salario:");
	scanf("%f", &salario); 
	printf("#################################################################\n");

	if(salario<=1750){
		reajuste = (salario*7.5)/100;
		
		printf("O salario a receber com abono de 150$ e 7,5 de aumento: %.2f", salario + reajuste + 150);
	}
	else
	if (salario >=1750){
		reajuste = (salario*7.5)/100;
		printf("O salario a receber com aumento de 7,5: %.2f", salario + reajuste);
    }  
		

}
