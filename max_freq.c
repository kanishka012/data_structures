#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr [argc-1],j,i,k=0,temp,max=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]!= -1)
		{
			int c=1;
			for(j=i+1;j<argc-1;j++)
			{
				if(arr[i]==arr[j])
				{
					arr[j]=-1;
					c++;
				}
			}
			if(c>=max)
			{
				max=c;
	 			temp=arr[i];
			}		
		}
	}
	printf("%d",temp);
return 0;
}	
				
	
