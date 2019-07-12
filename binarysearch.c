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
	int loc,x,arr[]={1,2,3,4,5,6,7,8}
	x=5;
	loc=binary_search(arr,0,10,x);
	if(loc!= -1)
		print("Element found : %d",loc);
	else
		print("Element no found");
return 0;
}
	
