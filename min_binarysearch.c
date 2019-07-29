#include<stdio.h>
#include<stdlib.h>
int min_binary_search(int arr[],int left,int right,int num)
{
	if(left>right)
		return -1;
	int mid=left+(right-left)/2;
	if(arr[mid]==num)
		return mid;
	if(arr[left]<arr[mid])
		{
			if(num>=arr[left] && num<=arr[mid])
			{
				return min_binary_search(arr,left,mid-1,num);
			return min_binary_search(arr,mid+1,right,num);
			}
		}
		 if(num>=arr[mid+1] && num<=arr[right])
                        {
                                return min_binary_search(arr,mid+1,right,num);
                        return min_binary_search(arr,left,mid-1,num);
                        }
}
int main(int argc,const char *argv[])
{
	int arr[argc-1],i,k=0,min=999,mid=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	for(i=0;i<argc-1;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
		int num=min;
	
	printf("minimum element is found at position %d",min_binary_search(arr,0,6,num));	
return 0;
}

	

