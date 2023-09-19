

char * removeOuterParentheses(char * s){
	int len = strlen(s);
	char* ret = (char*)malloc(sizeof(char) * (len + 1));
	char* stack = (char*)malloc(sizeof(char) * len/2);
	int top = 0;
	int pos = 0;
	for(int i = 0;i < len;i++)
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
			stack[top++] = '(';
		}
	}
	ret[pos] = '\0';
	return ret;
}
