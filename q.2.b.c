#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4

int path_exists(int mat[N][N], int rows, int cols);
void main()
{
	int mat[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int m = 0; m < N; m++)
		{
			scanf("%d", &mat[i][m]);
		}
	}
	printf("%d", path_exists(mat, N, N));
}
int path_exists(int mat[N][N], int rows, int cols)
{
	if (rows == 0 && cols == 0)
	{
		if (mat[rows][cols] == 1)
			return 1;
		else return 0;
	}
	if (mat[rows - 1][cols] == 1)
	{
		return 1 * path_exists(mat, rows - 1, cols);
	}
	else if (mat[rows][cols - 1] == 1)
		return 1 * path_exists(mat, rows, cols - 1);
	else if (mat[rows - 1][cols - 1] == 1)
		return 1 * path_exists(mat, rows - 1, cols - 1);
	else return 0;
}