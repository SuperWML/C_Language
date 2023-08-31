

char * interpret(char * command){
	int pos = 0;
	int len = strlen(command);
	char* ret = (char*)malloc(sizeof(char) * (len+1));
	for(int i = 0;i < strlen(command);i++)
	{
		if(command[i] == 'G')
		{
			pos += sprintf (pos + ret,"%s","G");
		}
		else if(command[i] == '(')
		{
			if(command[i+1] == ')')
			{
				pos += sprintf(pos + ret,"%s","o");
			}
			else
			{
				pos += sprintf(pos + ret,"%s","al");
			}
		}
	}
	return ret;
}
