void SelectSort(int arr[],int n)
{
	for(int i = 0;i < n-1;i++)
	{
		int k = i;
		for(int j = k+1;j < n;j++)
		{
			if(arr[j] < arr[k])
			{
				k = j;
			}
			if(k != i)
			{
				int temp = arr[k];
				arr[k] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
