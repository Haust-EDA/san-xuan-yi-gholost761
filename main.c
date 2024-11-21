//请在下方输入你的代码：
/*正三角和倒三角打印九九乘法表*/
#include "stdio.h"
int main()
{

	int x, y, z;
	for (x = 1; x <= 9; x++)
	{
		printf("\n");
		for (y = 1; y <= x; y++)
		{
			z = x * y;
			printf("%d*%d=%2d ", x, y, z);
		}
	}
	printf("\n");
	printf("\n");
	int a, b, c;
	for (a = 9; a <= 9 && a > 0; a--)
	{
		printf("\n");
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%2d ", a, b, c);
		}
	}
	return 0;
}

