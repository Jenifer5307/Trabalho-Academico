#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 200

typedef struct projeto{
 int  codigo;
 char Titulo[10];
 char Descricao[10];
 char Ano[4];
 char Status[10];
 char Responsavel[30];
}base_projetos;

int posicao = 0;

void cadastrarProjeto(base_projetos cadastro[MAX]);
void relatorioProjeto(base_projetos cadastro[MAX]);
void buscarCodigo(base_projetos cadastro[MAX]);
void buscarNome(base_projetos cadastro[MAX]);

void cadastrarProjeto(base_projetos cadastro[MAX]){
	system("cls");

	printf("\nCADASTRE OS PROJETOS");

	char resp = '1';
	
	while(resp == '1' && posicao <= MAX){
		posicao++;
		printf("\nCódigo: %d ", posicao);
		
	    cadastro[posicao].codigo = posicao;
		printf("\nInforme o Titulo do Projeto: ");
		fflush(stdin);
		gets(cadastro[posicao].Titulo);
	
		cadastro[posicao].codigo = posicao;
		printf("\nInforme o nome do Responsável: ");
		fflush(stdin);
		gets(cadastro[posicao].Responsavel);
		
		cadastro[posicao].codigo = posicao;
		printf("\nInforme a Descrição: ");
		fflush(stdin);
		gets(cadastro[posicao].Descricao);
		
		cadastro[posicao].codigo = posicao;
		printf("\nInforme o Status: ");
		fflush(stdin);
		gets(cadastro[posicao].Status);
		
		cadastro[posicao].codigo = posicao;
		printf("\nInforme o Ano: ");
		fflush(stdin);
		gets(cadastro[posicao].Ano);
		
		if(posicao < MAX){
			printf("\n\nDeseja cadastrar novo Projeto? [s] Sim [n] Não: ");
			fflush(stdin);
			scanf("%c", &resp);
		}else{
			printf("\n Não foi possível cadastrar projeto.\n");
			resp = 'n';
		}
	}
}



void imprimirTodos(base_projetos cadastro[MAX]){
	system("cls");

	printf("\n PROJETOS ");

	int linha=1;
	
	if(posicao >= 1){
		while(linha <= posicao){
			printf("%d - %s\n", cadastro[linha].codigo, cadastro[linha].Titulo);
			printf("%d - %s\n", cadastro[linha].codigo, cadastro[linha].Responsavel);
			printf("%d - %s\n", cadastro[linha].codigo, cadastro[linha].Descricao);
			printf("%d - %s\n", cadastro[linha].codigo, cadastro[linha].Status);
			printf("%d - %s\n", cadastro[linha].codigo, cadastro[linha].Ano);
			linha++;
		}	
			
	}else{
		printf("\nSem Registros Cadastrados\n");
	}	
	system("Pause");
}
void procurarCodigo(base_projetos cadastro[MAX])
{
	system("cls");
int codigo, achou;
	printf("\n CÓDIGO do PROJETO?");

	printf("\nEntre com o código: ");
	scanf("%d", &codigo);
	achou = 0;
	int j = 0;
	while((achou == 0) && (j <= posicao)){
		if(codigo == cadastro[j].codigo){
			printf("\n%d - %s\n", cadastro[j].codigo, cadastro[j].Responsavel);
			achou = 1;
			system("Pause");
		}
		j++;
	}
		if(achou == 0 ){
			printf("\nRegistro não encontrado com o código %d \n", codigo);
			system("Pause");
		}
}
void buscarStatus(base_projetos cadastro[MAX]){
	system("cls");
	char Status[42];
	int achou, j;

	printf("\n BUSCA POR STATUS DO PROJETO --> ");
    printf("\n --> Entre com o STATUS (idêntico ao digitado): ");
    printf("\n ************* \n");
	printf("\n digite 1 para: Projetos, A fazer");
    printf("\n ************* \n");   
    printf("\n digite 2 para: Projetos, Fazendo");
    printf("\n ************* \n");
    printf("\n digite 3 para: Projetos, Concluídos \n");
	fflush(stdin);
	gets(Status);
	achou = 0;
	j = 0;
	while((achou == 0) && (j < MAX)){
		if(strcmp(cadastro[j].Status, Status)==0){
			printf("\n%d - %s\n", cadastro[j].codigo, cadastro[j].Status);
			achou = 1;
			system("Pause");
		}
		j++;
	}
	if(achou == 0 ){
		printf("\nRegistro não encontrado com o nome %s \n", Status);
		system("Pause");
	}
}



int main()
{
	
	setlocale (LC_ALL, "Portuguese");
 int busca, i, j, acha, op;
 base_projetos cadastro[MAX];
    int continuar=1;
    int posicao = 0;
	
	system("cls");
    do
    { 
        	system("cls");
    printf("\t\t\t UNIVERSIDADE DE MARINGÁ - UNICESUMAR\n");
    printf("\t\t Nome: Jenifer Kelen Ventura dos Santos RA: 21140993-5\n\n");
	printf("\t\t---------------------------MENU---------------------------\n\n");
	printf("1- CADASTRAR PROJETOS\n");
	printf("2- TODOS OS PROJETOS\n");
	printf("3- TODOS OS PROJETOS COM STATUS: A FAZER.\n");
	printf("4- TODOS OS PROJETOS COM STATUS: FAZENDO.\n");
	printf("5- TODOS OS PROJETOS COM STATUS: CONCLUIDO.\n");
	printf("0- SAIR. \n\n");
	printf("\t\t\tDIGITE A OPÇÃO DESEJADA: \n");
        scanf("%d", &continuar);
   	

        switch(continuar)
        { 
        	case 1:
				cadastrarProjeto(cadastro);			
				break;
			case 2:
				imprimirTodos(cadastro);
				break;
			case 3:
				procurarCodigo(cadastro);
				break;
			case 4:
				buscarStatus(cadastro);
				break;
		   
			case 0:
				printf("\n ENCERRANDO CADASTRO... \n");
				system("Pause");
				break;
			default:
				printf("\n OPÇÃO INVÁLIDA. \n");
				system("Pause");
        }
    } while(continuar);
    return 0;
}
