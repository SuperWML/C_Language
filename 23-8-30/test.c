int fun(int n)
{
	int prod = 1 , i = 0;
	for(i = 1;i <= n;i++)
	{
		prod *= i;
	}
	return prod;
}
int main (void)
{
	int i = 12;
	printf ("%d",fun(i));
	return 0;
}
