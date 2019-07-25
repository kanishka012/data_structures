#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,j,k=0,hcf=1;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int min=arr[0];
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("%d",min);
	for(i=2;i<=min;i++)
	{
		int flag=0;
		for(j=0;j<argc-1;j++)
		{
			if(arr[j]%i!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{	
			hcf=i;
		}
	}
	printf("%d",hcf);
return 0;
}
