#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,j,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int sum=atoi(argv[argc-1]);
	for(i=0;i<argc-2;i++)
	{
		for(j=i+1;j<argc-2;j++)
		{
			if(arr[i]+arr[j]==sum)
			 printf("%d,%d\n",arr[i] ,arr[j]);
		}
	}
return 0;
}
