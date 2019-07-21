#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
        int arr[argc-1],i,k=0,n=atoi(argv[argc-1]);
        for(i=1;i<argc-1;i++)
        {
                arr[k]=atoi(argv[i]);
                k++;
        }
       while(n!=0)
	{
			int temp=arr[0];
                        for(i=0;i<argc-3;i++)
                        {
                                arr[i]=arr[i+1];
                        }
                        arr[argc-3]=temp;
			n--;
	}   	
               		 int flag=0;
                         for(i=0;i<argc-3;i++)
                		{
                        	if(arr[i]>arr[i+1])
                        		{
                                		flag=1;
                                		break;
                        		}
                		}
           
                	if(flag==1)
               			 printf("Array is not sorted");
			else
				printf("Array Is Sorted");
	
   return 0;
}

