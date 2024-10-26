#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //bibliotca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro()  //Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//in�cio cria��o de vari�veis/string
	char arquivo[40];
	char cpf [40];  //colchetes faz com que seja uma string
	char nome[40];
	char sobrenome[40];
	char cargo[40];
		//final cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s", cpf);   //percent s de string - armazenando strinf
	
	strcpy(arquivo, cpf);  //respons�vel por copiar os valores das strings
	
	FILE *file; // cria o arquivo 
	file = fopen(arquivo, "w"); // cria o arquivo - w de write
	fprintf(file, cpf); //salva o valor da vari�vel cpf
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //a de atualizar a informa��o
	fprintf(file, ", ");
	fclose(file);
	
	printf ("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //a de atualizar a informa��o
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a"); //a de atualizar a informa��o
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");

}

int consulta()
{
	setlocale(LC_ALL, "PORTUGUESE");
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r"); // r de ler o arquivo - read
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL);
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s", cpf);
	
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL );
	{
		printf("O usu�rio n�o se encontra no sistema! \n");
	system("pause");
	}
	
}

	int main()
{	
		int opcao=0;  //Definindo vari�veis, um igual � atributo
		int laco=1;   //definindo a vari�vel
	
		for(laco=1;laco=1;) //repeti��o
	{
		
		system("cls"); //respons�vel por limpar a tela
	
		setlocale(LC_ALL, "PORTUGUESE"); //in�cio do menu
	
		printf("### Cart�rio da EBAC ###\n\n");
		printf("Escolha a Op��o Desejada do Menu: \n\n");
		printf("\t1 - Registrar Nomes \n");
		printf("\t2 - Consultar Nomes \n");
		printf("\t3 - Deletar Nomes \n"); 
		printf("\t4 - Sair do Sistema \n\n\n\n");
		printf("Op��o: "); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
		system("cls");  //o sistema deleta todas as op��es que tinham antes ap�s a escolha do usu�rio, visualmente limpa a tela

	switch(opcao)  //quando houver muitas opcoes de if
	{
		case 1:  //apresenta��o das fun��es dispon�veis
		registro(); //chamada de fun��es
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
			printf("Obrigada por utilizar este sistema!\n\n\n\n");
			return 0; //quebra de la�o e sistema
			break;
		
				
		default: //caso n�o seja nenhuma op��o dispon�vel
		printf("Essa op��o n�o est� dispon�vel\n"); //fim da sele��o
		system("pause");
		break;
			
	}
	}
}

 	

		
	

