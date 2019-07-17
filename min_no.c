#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0;
	for(i=1;i<=argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int min=arr[0];
	for(i=1;i<argc-1;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("%d",min);
return 0;
}

