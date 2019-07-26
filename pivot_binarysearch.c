#include<stdio.h>
#include<stdlib.h>
int pivot_binary_search(int arr[],int left,int right,int num)
{
        if(left>right)
                return -1;
        int mid=left+(right-left)/2;
        if(arr[mid]==num)
                return mid;
        if(arr[left]<=arr[mid])
        {
                if(num>=arr[left] && num<=arr[mid])
                        return pivot_binary_search(arr,left,mid-1,num);
                return pivot_binary_search(arr,mid+1,right,num);
        }
        if(num>=arr[mid+1] && num<=arr[right])
                        return pivot_binary_search(arr,mid+1,right,num);
                return pivot_binary_search(arr,left,mid-1,num);
}
int main(int argc,const char *argv[])
{
        int num=atoi(argv[argc-1]);
        int arr[argc-1],i,mid=0,k=0;
        for(i=1;i<argc-2;i++)
        {
                arr[k]=atoi(argv[i]);
                k++;
        }
	int max=arr[0];
	for(i=0;i<argc-2;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			mid=i;
		}
	}
        int a=pivot_binary_search(arr,0,6,num);
        printf("%d",a);
}

