bool is_open(char s)
{
	if(s == '(' || s == '{' || s == '[')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool is_match(char c1,char c2)
{
	if(c1 == ')' && c2 == '(' || c1 == '}' && c2 == '{' ||c1 == ']' && c2 == '[')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool is_close(char s)
{
	if(s == ')' || s == ']' || s == '}')
		return true;
	else
	{
		return false;
	}
}

bool isValid(char * s){
	char stack[strlen(s) + 1];
	int top = 0;
	for(int i = 0;i < strlen(s);i++)
	{
		if(is_open(s[i]))
		{
			stack[top] = s[i];
			top++;
		}
		else
		{
			if(is_close(s[i]))
			{
				if(top == 0)
				{
					return false;
				}
				else
				{
					char tmp = stack[top-1];
					if(is_match(s[i],tmp))
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
	}
	if(top != 0)
	{
		return false;
	}
	return true;
}
