//函数功能：判断是否是开括号
bool Is_Open(char s)
{
	if(s == '(' || s == '[' || s == '{')
	{
		return true;
	}
	return false;
}
//函数功能：判断是否是闭括号
bool Is_close(char s)
{
	if(s == ')' || s == '}' || s == ']')
	{
		return true;
	}
	return false;
}
//函数功能：判断是否是成对的括号
bool Is_Match(char ch1,char ch2)
{
	if(ch1 == '(' && ch2 == ')'|| ch1 == '{' && ch2 == '}'|| ch1 == '[' && ch2 == ']')
	{
		return true;
	}
	return false;
}

bool isValid(char * s){
	char* stack = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	int top = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		if(Is_Open(s[i]))
		{
			stack[top++] = s[i];
		}
		else if(Is_close(s[i]))
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
