#define MAX(a,b) (a > b?a:b)

int maxDepth(char * s){
	int count = 0;
	int maxcount = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(s[i] == '(')
		{
			count++;
		}
		maxcount = MAX(count,maxcount);
		if(s[i] == ')')
		{
			count--;
		}
	}
	return maxcount;
}
