#include<stdio.h>
int determine_integer(int n)
{
	int arr[4][4];
	int i, j, count = 0;
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 4; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			if (n == arr[i][j])
			{
				count++;
			}
		}
	}
	if (count == 0)
		return 0;
	return 1;
}
void main()
{
	int n;
	scanf("%d", &n);
	if (determine_integer(n) == 0)
		printf("不含有该整数\n");
	else
		printf("含有该整数\n");

}