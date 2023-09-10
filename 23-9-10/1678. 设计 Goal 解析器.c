

char * interpret(char * command){
	int len = strlen(command);
	char * ret = (char *)malloc(sizeof(char) * (len + 1));
	int pos = 0;
	for(int i = 0;i < len;i++)
	{
		if(command[i] == 'G')
		{
			pos += sprintf (ret + pos,"%s","G");
		}
		else if(command[i] == '(')
		{
			if(command[i+1] == ')')
			{
				pos += sprintf (ret + pos,"%s","o");
			}
			else
			{
				pos += sprintf (ret + pos,"%s","al");
			}
		}
	}
	return ret;
}
