#include <stdio.h>  //biblioteca de comunicação com usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h>// biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string


int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);  // Respomsavel por copiar os valeres das string
	
	FILE *file;  //cris o aquivo
	file = fopen(arquivo, "w");  //Salvo o valor da variavel
	fprintf(file, cpf);
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	system("pause");

	
}

int consulta()
{
	printf("você escolheu consultar os Nomes!\n");
	system("pause");	
}

int deleter()
{
	printf("Você escolheu Deletar Nomes\n");
	system("pause");
}

int main ()
{
	int opcao=0; //Definindo variaveis
	int laco=1;
	
	for( laco=1;laco=1;)
	{
	
		system("cls");
	
		setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
		printf("### cartório da EBAC##\n\n");  // Inicio do menu
		printf("Escolhe a opção desejada do menu:\n\n");
		printf("\t1- Rgistrar nomes\n");
		printf("\t2- consulta nomes\n");
		printf("\t3- Deletar nomes\n");
		printf("opcao:");  //fim do menu
	
		scanf("%d", &opcao);   //armazanando a escolha do usuario
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
			

		break;
		
			case 2:
				
	
		break;
		
			case 3:
			
	
		break;
		
			default:
				
			printf("Esss opção não esta disponivel!\n");  //fim da seleção
			
		system("pause");
		
		break;
	}
			
		
		
			
		}

	
		}	
		
	}


