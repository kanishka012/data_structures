#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
	int arr[argc-1],i,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int temp=arr[argc-2];
	for(i=argc-2;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	for(i=0;i<argc-1;i++)
	{
		printf("%d",arr[i]);
	}
return 0;
}
	
