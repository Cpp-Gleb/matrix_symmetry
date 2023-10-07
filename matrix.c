#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int matrix[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	int a = 1;
	int lim = 1;
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < a; j++)
		{
			if(matrix[i][j] != matrix[j][i])
			{
				printf("No");
				return 1;
			}
		}
		a++;
	}
	printf("Yes");
	return 0;
}
