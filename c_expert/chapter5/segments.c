#include <stdio.h>
#include <stdlib.h>

char pear[40];
static double pearch;
int mango = 13;
static long melon = 2001;

int main()
{
	int i = 3;
	int *ip = malloc(sizeof(i));
	pear[5] = i;
	pearch = 2.0 * mango;
	printf("Hello world\n");
	return 0;
}
