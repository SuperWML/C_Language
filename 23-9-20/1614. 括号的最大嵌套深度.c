

int maxDepth(char * s){
	int top = 0;
	int maxsize = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(s[i] == '(')
		{
			top++;
		}
		if(maxsize < top)
		{
			maxsize = top;
		}
		if(s[i] == ')')
		{
			top--;
		}
	}
	if(maxsize < top)
	{
		maxsize = top;
	}
	return maxsize;
}
