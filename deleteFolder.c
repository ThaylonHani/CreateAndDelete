void deleteFolder(char name[]){

	if(RemoveDirectoryA(name)){
		printf("Pasta \"%s\" deletada com sucesso\n", name);
	}
	else {
		printf("Pasta \"%s\"  nao deletada\n", name);
	}
}