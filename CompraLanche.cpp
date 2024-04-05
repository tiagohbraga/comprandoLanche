/*
Criar um codigo para a seguinte condição
uma pessoa vai comprar um lanche e precisa dizer quantos lanches vão ser pedidos
se vai querer ou não refrigerante, quantidade e valor do refrigerante
valor do desconto dado
*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>

main(){
setlocale(LC_ALL, "portuguese");
float vrefri, vlanche, vdesconto, vfinal;
int qrefri, qlanche;
char resp;

	printf("Informe a quantidade de lanche: ");
	scanf("%i",&qlanche);
	printf("\nInforme o valor do lanche: ");
	scanf("%f", &vlanche);
	printf("\nDeseja Refrigerante? S/N: ");
	resp = getche();
	vfinal = 0;	
	
	if(resp == 's' || resp == 'S'){
		printf("\nInforme o valor do refrigerante: ");
		scanf("%f", &vrefri);
		printf("\nInforme a quantidade de refrigerante: ");
		scanf("%i", &qrefri);
		vfinal = float (vlanche*qlanche + vrefri*qrefri);
	}
	else{
		if(resp == 'n' || resp == 'N'){
			vfinal = float (vlanche*qlanche);
		}
		
	}
	if (vfinal > 20.0){
			printf("\n\n**Você ganhou de desconto 10%%**\n\n");
			vdesconto = vfinal*0.1;
			vfinal-= vdesconto;
		}
	printf("\n\nO valor final é %.2f", vfinal);
}
