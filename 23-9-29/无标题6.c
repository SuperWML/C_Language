

int maxDepth(char * s){
	int top = 0;
	int max = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(s[i] == '(')
		{
			top++;
		}
		if(max < top)
		{
			max = top;
		}
		if(s[i] == ')')
		{
			top--;
		}
	}
	if(max < top)
	{
		max = top;
	}
	return max;
}
