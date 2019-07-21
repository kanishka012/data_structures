#include<stdio.h>
int binary_search(int arr[],int left,int right,int key)
{
	int i;
	while(left<=right)
	{
		i=left+(right-left)/2;
		if(arr[i]==key)
		{
		   return i;
		}
		if(arr[i]<key)
		i=i+1;
		if(arr[i]>key)
		i=i-1;
	}
return -1;
}
int main()
{
	int loc,arr[]={1,2,3,4,5,6,7,8};
	//int x;
	loc=binary_search(arr,0,10,5);
	if(loc!= -1)
		printf("Element found : %d",loc);
	else
		printf("Element no found");
return 0;
}
	
