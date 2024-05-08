#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <direct.h>
#include <string.h>
#include <windows.h>
#include "deleteFolder.c"
#include "createFolder.c"
#include "handleSpace.c"
int main()
{
	char folderName[20];
	char * folderNameWithoutSpaces;
	char createOrDelete[1];
	char space[1];
	SetConsoleTitle("Criando arquivos e pastas");

	
	system("cls");


	printf("Escreva C para criar uma pasta e D para deletar: "); 
	scanf("%s", createOrDelete); 
	printf("\n"); 
	switch(*createOrDelete)
	{ 
		case ('C'): 
			printf("Digite o nome(max:20) da pasta para ser criada:\n");
			fflush(stdin);
			scanf("%[^\n]", &folderName); 
			printf("\n"); 
			printf("Deseja criar sua pasta com espacos ? Y(com espacos), N(sem espacos): ");
			scanf("%s", space);
			switch(*space) {
				case ('N'):
					folderNameWithoutSpaces = handleSpaces(folderName);
					createFolder(folderNameWithoutSpaces); 
					break;
				default: 
					createFolder(folderName);
			}
			break; 
		case ('D'): 
			printf("Digite o nome(max:20) da pasta para ser criada:\n");
			fflush(stdin);
			scanf("%[^\n]", &folderName); 
			printf("\n");
			printf("Deseja deletar sua pasta com espacos ? Y(com espacos), N(sem espacos): ");
			scanf("%s", space);
			switch(*space) {
				case ('N'):
					folderNameWithoutSpaces = handleSpaces(folderName);
					deleteFolder(folderNameWithoutSpaces); 
					break;
				default: 
					
					deleteFolder(folderName); 
			} 
			break;
		default: printf("Nenhuma opcao selecionada"); }


return 0;
};	