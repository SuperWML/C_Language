char * interpret(char * command){
	int len = strlen(command);
	char* res = (char*)malloc(sizeof(char)*(len + 1));
	int pos = 0;
	for(int i = 0;command[i] != '\0';i++)
	{
		if(command[i] == 'G')
		{
			pos+=sprintf(res + pos,"%s","G");
		}
		else if(command[i] == '(')
		{
			if(command[i+1] == ')')
			{
				pos+=sprintf(res+pos,"%s","o");
			}
			else
			{
				pos+=sprintf(res+pos,"%s","al");
			}
		}
	}
	return res;
}
