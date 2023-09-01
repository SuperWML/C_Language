

char * interpret(char * command){
	int len = strlen(command);
	char* ret = (char *)malloc(sizeof(command) * (len+1));
	int pos = 0;
	for(int i = 0;i < len;i++)
	{
		if(command[i] == 'G')
		{
			pos += sprintf(pos + ret,"%s","G");
		}
		else if(command[i] == '(')
		{
			if(command[i+1] == ')')
			{
				pos += sprintf(pos+ret,"%s","o");
			}
			else
			{
				pos += sprintf(pos+ret,"%s","al");
			}
		}
	}
	return ret;
}
