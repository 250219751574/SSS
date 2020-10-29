#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int l(int h)
{
	if (h % 5 != 0)
		h = h - 50;
	return h;
}
int sum(int x, int y)
{
	int g = x + y;
	if (g % 2 != 0)
		g = ((g + 1) / 2);
	g = l(g);
	return g;
}
int main(void)
{
	
	FILE* fp;
	char str [130];
	int k = 0;
	if (fopen_s(&fp, "sss.txt", "r") != 0)
		{
			printf("salo\n");
			exit(1);
		}
	while (!feof(fp)) 
	{
		if (fgets(str, 126, fp)) 
		{
			printf("%s", str);
			k = sum(k, atoi(str));
		}
	}
	fclose(fp); 
	printf("k:%i", k);
	return 0;
}