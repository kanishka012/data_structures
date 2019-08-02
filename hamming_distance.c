#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,j,k=0,arr1[argc-1];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		arr1[k]=atoi(argv[i]);
		k++;
	}
	int flag=0;
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=1;
			break;
		}
	}
		if(flag==1)
		{
			int temp=arr[0];
			for(i=0;i<argc-2;i++)
			{
				arr[i]=arr[i+1];
			}
			arr[argc-2]=temp;
		}
	int count=0;
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]!=arr1[i])
		count++;
	
	}
	printf("Hamming Distance,%d",count);
}
		
