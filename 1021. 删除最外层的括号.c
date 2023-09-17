

char * removeOuterParentheses(char * s){
	int len = strlen(s);
	char* ret = (char*)calloc(sizeof(char),(strlen(s) + 1));
	char* stack = (char*)calloc(sizeof(char),strlen(s)/2);
	int pos = 0;
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
