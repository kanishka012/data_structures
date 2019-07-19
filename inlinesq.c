#include<stdio.h>
static inline int square(int x)
{
return x*x;
}
int main(void)
{
	int x;
	x=square(10);
	printf("%d",x);
return 0;
}
