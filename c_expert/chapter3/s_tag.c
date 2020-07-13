#include <stdio.h>

#define SIZE 3

struct s_tag {
	int a [SIZE];
};

struct s_tag orange, lime, lemon;

struct s_tag twofold (struct s_tag s) {
	int j;
	for ( j = 0; j < SIZE; j++ )
	{
		s.a[j] *= 2;
	}
	return s;
}

int main()
{
	int i;
	for ( i = 0; i< SIZE; i++ )
	{
		lime.a[i] = 1;
	}
	lemon = twofold(lime);
	orange = lemon;
	for ( i = 0; i< SIZE; i++ )
	{
		printf("lime.a[%d]=%d\n", i, lime.a[i]);
		printf("lemon.a[%d]=%d\n", i, lemon.a[i]);
		printf("orange.a[%d]=%d\n", i, orange.a[i]);
	}
	return 0;
}
