#include <stdio.h>  //biblioteca de comunica��o com usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>// biblioteca de aloca��es de texto por regi�o
#include <string.h>  //biblioteca responsavel por cuidar dos string

int registro() //fun��o responsavel por cadastrar o usu�rio no sistema
{
//inicio cria��o de variaveis/string
char arquivo[40];
char cpf[40];
char nome [40];
char sobrenome[40];
char cargo[40];

//final da cria��o de variaveis/string

printf("Digite o cpf a ser cadastrado: ");// coletando informa��o do usu�rio
scanf("%s",cpf); //%s refere-se a string

strcpy(arquivo, cpf);  //responsavel por copiar os valores dos string

FILE*file; //cria arquivo
file = fopen(arquivo, "w");  //cria o aquivo e o "w" significa escrever
fprintf( file, cpf);  //salvo o valor da variavel
fclose(file);	// fecha o arquivo

file= fopen(arquivo, "a");   // abrindo arquivo para atualiza
fprintf(file,","); // colocando "," para dividi as variaveis do processo
fclose(file); //fechando o arquivo

printf("Digite o nome a ser cadastrado:"); //colocando informa��o do usu�rio
scanf("%s",nome);// %s refese-se a string

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, nome);// escrevendo uma variavel no arquivo
fclose(file);// fecha o arquivo

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file,",");// colocando "," para dividi as variaveis do processo
fclose(file);// fecha o arquivo

printf("Digite o sobrenome a ser cadastrado:");// coletando informa��o do usu�rio
scanf("%s", sobrenome); //%s refere-se a string

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, sobrenome);// escrevendo uma variavel no arquivo
fclose(file);// fecha o arquivo

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file,",");// colocando "," para dividi as variaveis do processo
fclose (file);// fecha o arquivo

printf("Digite o cargo a ser cadastrado:");// coletando informa��o do usu�rio
scanf("%s", cargo); //%s refere-se a string

file= fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, cargo); // escrevendo uma variavel no arquivo
fclose(file);// fecha o arquivo

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, ",");// colocando "," para dividi as variaveis do processo
fclose(file);// fecha o arquivo


}

int consulta()
{
	setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
	//inicio cria��o de variaveis/string
	char cpf[40];
	char conteudo [200];
	
	//final da cria��o de variaveis/string
	
	printf("Digite o CPF a ser consultado: ");// coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("n�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo,200,file) !=NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio");
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n"); //comando para pula linha no sistema
	}
	
	system("pause");
}

int deletar()
{
	//inicio cria��o de variaveis/string
	char cpf[40];
	
	//final da cria��o de variaveis/string
	
	setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
	printf(" Digite o cpf do usu�rio a ser deletado:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf(" O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}

	else
	{
		fclose(file); //fecha o arquivo 
		remove(cpf); //  removedo o arquivo
		
		printf(" usu�rio deletado!\n");
		
		system("pause");
	}
}


int main ()
	{
		int opcao=0; //Definindo variaveis
		int laco=1;
		char senhadigitada[20] = "a";
		int comparacao;
	
	
		printf("###Cart�rio da EBAC###\n\n");
		printf("Login de adminstrador!\n\nDigite a sua senha: ");
		scanf("%s", senhadigitada); //armazena a senha na variavel 'senhadigitada'
	
		comparacao = strcmp(senhadigitada,"admin");

		if(comparacao == 0)
		{
			
			for(laco=1;laco=1;)
			{	
			system("cls"); //respondavel por limpar a tela
	
			setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
		
			printf("### cart�rio da EBAC##\n\n");  // Inicio do menu
			printf("Escolhe a op��o desejada do menu:\n\n");
			printf("\t1- Rgistrar nomes\n");
			printf("\t2- consulta nomes\n");
			printf("\t3- Deletar nomes\n");
			printf("\t4- Sair do sistema\n\n");
			printf("opcao:");  //fim do menu
		
			scanf("%d", &opcao);   //armazanando a escolha do usuario
		
			system("cls"); //responsavel por limpa a tela
			
			 switch(opcao) // inicio da sele��o do menu
		
				{
					case 1:
					registro(); //chama de fun��es
					break;
			
					case 2:
					consulta(); 
					break;
			
					case 3:
					deletar(); 
						break;
					
					case 4:
					printf("Obrigado por utilizar o sistema!\n");
					system("pause");
					return 0;
					break;	
								
			
					default :
					printf("Esss op��o n�o esta disponivel!");  //fim da sele��o do menu
					system("pause");
					break;
				
				}
			
				
			
		
				
			}
		}
		else
		printf("senha incorreta!");
		
	
	}
	


 		 		
	

 


