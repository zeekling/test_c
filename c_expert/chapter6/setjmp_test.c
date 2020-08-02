#include <stdio.h>
#include <setjmp.h>
jmp_buf buf;


void banana(void)
{
	printf("in banana() \n");
	longjmp(buf, 1);
	/* 一下代码不会被执行 */
	printf("you'll never see this, because i longjmp'd");
}

int main(void)
{
	if (setjmp(buf)){
		printf("back in main \n");
	}else{
		printf("first time throught\n");
		banana();
    }
	return 0;
}
