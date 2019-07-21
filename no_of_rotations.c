#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0,count=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	while(1)
	{
		int flag=0;
		for(i=0;i<argc-2;i++)
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
			count++;
			arr[argc-2]=temp;
		}
		if(flag==0)
		break;
	}
	printf("No of rotations : %d",count);
return 0;
}
 		
