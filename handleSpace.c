
char * handleSpaces(char name[]) {

	char * newName;
	newName = malloc(sizeof(char));
	int position = 0;

	for (int i = 0; i < strlen(name) ; i++)
	{

		if(name[i] ==  ' ' ){
			newName[position] = '_';
		} 
		 else {
			newName[position] = name[i];
		}
		++position;
	}
	newName[position]= '\0';
	return newName;
}