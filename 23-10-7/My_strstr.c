char* My_strstr(const char* str1,const char* str2)
{
	char* cp = str1;
	char* s1 = cp;
	char* s2 = str2;
	if(*str2 == '\0')
	{
		return str1;
	}
	else
	{
		while(*cp != '\0')
		{
			s1 = cp;
			while(*s1 && *s2 && *s1 == *s2)
			{
				s1++;
				s2++;
				if(*s2 == '\0')
				{
					return cp;
				}
			}
			cp++;
			s2 = str2;
		}
	}
	return null;
}
