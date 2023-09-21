bool Is_Close(char ch)
{
	if(ch == ')' || ch == '}' || ch == ']')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Is_Open(char ch)
{
	if(ch == '(' || ch == '[' || ch == '{')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Is_Match(char ch1,char ch2)
{
	if(ch1 == '(' && ch2 == ')' || ch1 == '[' && ch2 == ']' || ch1 == '{' && ch2 == '}')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isValid(char * s){
	int len = strlen(s);
	char* stack = (char*)malloc(sizeof(char) * (len+1));
	int top = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(Is_Open(s[i]))
		{
			stack[top++] = s[i];
		}
		else if(Is_Close(s[i]))
		{
			if(top == 0)
			{
				return false;
			}
			else
			{
				char tmp = stack[top-1];
				if(Is_Match(tmp,s[i]))
				{
					top--;
				}
				else
				{
					return false;
				}
			}
		}
	}
	if(top != 0)
	{
		return false;
	}
	return true;
}
