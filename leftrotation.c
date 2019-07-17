#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int temp=arr[0];
	for(i=0;i<argc-2;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[argc-2]=temp;
	for(i=0;i<argc-1;i++)
	{
		printf("%d",arr[i]);
	}
return 0;
}


	
