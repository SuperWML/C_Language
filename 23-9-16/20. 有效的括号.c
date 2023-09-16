bool Is_open(char ch)
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
	return false;
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
	char* ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	int top = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(Is_open(s[i]))
		{
			ret[top++] = s[i];
		}
		else if(Is_Close(s[i]))
		{
			if(top == 0)
			{
				return false;
			}
			else
			{
				char tmp = ret[top-1];
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
