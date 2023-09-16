

char * removeOuterParentheses(char * s){
	char* ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	int pos = 0;
	char* stack = (char*)malloc(sizeof(char) * (strlen(s)/2));
	int top = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(s[i] == ')')
		{
			top--;
		}
		if(top > 0)
		{
			ret[pos++] = s[i];
		}
		if(s[i] == '(')
		{
			stack[top++] = s[i];
		}
	}
	ret[pos] = '\0';
	return ret;
}
