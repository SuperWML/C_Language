bool isPalindrome(int x){
	unsigned long long sum = 0;
	int tmp = x;
	if(x < 0)
	{
		return false;
	}
	else if(x >= 0 && x < 10)
	{
		return true;
	}
	else
	{
		sum = 0;
		while(tmp)
		{
			sum = sum*10;
			sum += tmp%10;
			tmp /= 10;
		}
	}
	if(sum == x)
	{
		return true;
	}
	return false;
}

