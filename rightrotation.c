#include<stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
	int arr[argc-1],i,k=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int temp;
	int n=atoi(argv[argc-1]);
	while(n!=0){
		temp=arr[argc-3];
		for(i=argc-3;i>0;i--)
		{
			arr[i]=arr[i-1];
		}
		arr[0]=temp;
		n--;
		}
	for(i=0;i<argc-2;i++)
	{
		printf("%d",arr[i]);
	}
	
return 0;
}
	
