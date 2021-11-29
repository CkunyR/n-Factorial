#include <stdio.h>

int main()
{
	int i = 1;
	int AMD = 1;
	int n = 0;
	scanf("%d", &n);
	for (i=1; i <= n; i++)
	{
		AMD *= i;
	}
	printf("%d ", AMD);
	return 0;
}