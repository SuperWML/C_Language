int main()
{
	printf ("%d",fun(10));
	return 0;
}
int fun(int x)
{
	return (x==1) ? 1 : (x + fun(x-1));
}

