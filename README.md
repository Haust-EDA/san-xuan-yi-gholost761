[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/NVFF0jAw)
点击main.c进去右上角区域，就地编辑，写代码之后提交更改，作业就提交成功了！
#根据自己进度，题目三选一： 
1.在学C语言的，按照正三角和倒三角打印出九九乘法表 
2.在学51的，在8*8点阵屏上轮流显示：“河南科技大学” 
3.在学32的，用按键控制,每按一下变一下，使得LED屏显示“我靠NB”“电协NB”“老子最NB”“耶耶耶”
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

