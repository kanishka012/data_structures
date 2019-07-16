#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int max=arr[0];
	for(i=1;i<argc-1;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d",max);
	
return 0;
}

