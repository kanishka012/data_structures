#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc];
	int i;
	for(i=0;i<argc;i++)
	{
		arr[i]=atoi(argv[i]);
	}
	int x=argc-1;
	for(i=x;i>=1;i--)
	{
		printf("%d",arr[i]);
	}
return 0;
}

