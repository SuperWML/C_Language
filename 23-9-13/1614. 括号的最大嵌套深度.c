#define MAX(a,b) ((a) > (b))?(a):(b)

int maxDepth(char * s){
	int len = strlen(s);
	int ret = 0;
	int size = 0;
	for(int i = 0;i < len;i++)
	{
		if(s[i] == '(')
		{
			size++;
		}
		ret = MAX(ret,size);
		if(s[i] == ')')
		{
			size--;
		}
	}
	return ret;
}

