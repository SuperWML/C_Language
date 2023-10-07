char* My_strstr(char* str1,const char* str2)
{
	int ret = str1;
	char* cp = str1;
	char* s1 = str1;
	char* s2 = str2;
	if(*str2 == '\0')
	{
		return ret;
	}
	while(*cp != '\0')
	{
		s1 = cp;
		s2 = (char*)str2;
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
	}
}
