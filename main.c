#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
	char remedio[35];
	char fabricante[30];
	char tipo[35];
	float valor;
	} cadastro[50];
	
void main() {
	struct cadastro;
	int op, i=0, x, comp,comp2,alt;
	char tipox[35];
	char nomer[35];
	do{
		system("cls"); //limpar tela
		printf("\nMenu de informa��es: ");
		printf("\n1 -Cadastrar remedio");
		printf("\n2 -Visalizar");
		printf("\n3 -Alterar");
		printf("\n4 -Pesquisar");
		printf("\n5 -Sair\n");
		printf("\nDigite a op��o desejada:");
		scanf("%d", &op);
		switch(op){
		
			case 1://Op��o numero 1 (Cadastro)
				printf("\nInforme o nome do remedio: ");
				scanf("%s", &cadastro[i].remedio);
				printf("\nInforme o fabricante: ");
				scanf("%s", &cadastro[i].fabricante);
				printf("\nInforme o tipo do remedio: ");
				scanf("%s", &cadastro[i].tipo);
				printf("\nInforme o valor do remedio: ");
				scanf("%f", &cadastro[i].valor);
				i++;
				break;
				
			case 2://Op��o numero 2 (Visualizar)
				for(i=0; i<50;i++){
					printf("\nNome: %s", cadastro[i].remedio);
					printf("\nFabricante: %s", cadastro[i].fabricante);
					printf("\nTipo do Remedio: %s", cadastro[i].tipo);
					printf("\nValor: R$ %0.2f", cadastro[i].valor);
					printf("\n---------------------------------------------");
				}
				getch();
				break;
				
			case 3: //Op��o numero 3 (Alterar)
				printf ("\nInforme o codigo do remedio para altera-lo: ");
				scanf ("%d", &alt);fflush(stdin);
				printf ("\nNome: %s", cadastro[alt].remedio);
				printf ("\nDigite o nome do NOVO remedio: ");
				scanf ("%s", &cadastro[alt].remedio);
				printf ("\nFabricante: %s", cadastro[alt].fabricante);
				printf("\nDigite o nome do NOVO fabricante: ");
				scanf ("%s", &cadastro[alt].fabricante);
				printf ("\nTipo: %s", cadastro[alt].tipo);
				printf ("\nDigite o nome do NOVO tipo de remedio: ");
				scanf ("%s", &cadastro[alt].tipo);
				printf ("\nValor: %0.2f", cadastro[alt].valor);
				printf("\nDigite o NOVO valor do remedio: ", cadastro[alt].valor);
				scanf ("%f", &cadastro[alt].valor);
				break;
				
			case 4://Op��o numero 4 (Pesquisar)
				printf("\nPesquisar\n");
				printf("\nInforme o nome do remedio: ");
				scanf("%s", &nomer);
				printf("\nInforme o tipo do remedio: ");
				scanf("%s", &tipox);
				for(x=0;x<50;x++){
					comp = strcmp(nomer,cadastro[x].remedio);
					comp2 = strcmp(tipox,cadastro[x].tipo);
					if(comp == 0 && comp2 == 0){
						printf("\nNome do cadastro: %s", cadastro[x].remedio);
						printf("\nFabricante: %s", cadastro[x].fabricante);
						printf("\nTipo: %s", cadastro[x].tipo);
						printf("\nValor: %0.2f", cadastro[x].valor);
					}
				}
				getch();
				break;
				
			case 5://Op��o numero 5 (Sair)
				break;
				
			default:
				printf ("\n--------------------Op��o invalida--------------------------");
				break;
		}
	}while(op != 5);
}
