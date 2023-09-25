bool Is_Open(char ch)
{
	if(ch == '(' || ch == '{' || ch == '[')
	{
		return true;
	}
	return false;
}

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

bool Is_Match(char ch1,char ch2)
{
	if(ch1 == '(' && ch2 == ')' || ch1 == '{' && ch2 == '}' || ch1 == '[' && ch2 == ']')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isValid(char * s){
	char* stach = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	int top = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(Is_Open(s[i]))
		{
			stach[top++] = s[i];
		}
		else if(Is_Close(s[i]))
		{
			if(top == 0)
			{
				return false;
			}
			else
			{
				char tmp = s[i];
				if(Is_Match(stach[top-1],tmp))
				{
					top = top-1;
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
	else
	{
		return true;
	}
}
