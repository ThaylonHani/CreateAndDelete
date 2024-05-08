void createFolder(char name[] ){

	if(CreateDirectory(name, NULL)){
		printf("pasta \"%s\" criada com sucesso\n", name);
	} else {
		printf("Pasta \"%s\" nao foi criada, confira se ja existe pasta com o mesmo nome.\n", name);
	}

}
