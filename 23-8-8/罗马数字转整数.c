int romanToInt(char * s){
	int strlength = strlen(s);
	int flag = 0;
	int flag_1 = 0;
	strlength--;
	int sum = 0;
	for(;strlength >= 0;strlength--)
	{
		switch(*(s+strlength))
		{
			case 'I':flag = 1;break;
			case 'V':flag = 5;break;
			case 'X':flag = 10;break;
			case 'L':flag = 50;break;
			case 'C':flag = 100;break;
			case 'D':flag = 500;break;
			case 'M':flag = 1000;break;
		}
		flag_1 = flag_1 > flag ? -flag :flag;
		sum += flag_1;
	}
	return sum;
}
