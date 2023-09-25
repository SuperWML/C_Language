

int maxDepth(char * s){
	int top = 0;
	int maxcount = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(s[i] == '(')
		{
			top++;
		}
		if(maxcount < top)
		{
			maxcount = top;
		}
		if(s[i] == ')')
		{
			top--;
		}
	}
	if(maxcount < top)
	{
		maxcount = top;
	}
	return maxcount;
}
