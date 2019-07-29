#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,const char*argv[])
{
        string s=argv[argc-1];
        char p[s.length()];                                     //convert string to char array
        int i,j;
        for(i=0;p[i]!='\0';i++)
        {
                p[i]=s[i];
        }
        for(i=0;p[i]!='\0';i++)
        {
                if(p[i]!='1')
                {
                        for(j=i+1;p[j]!='\0';j++)
                        {
                                if(p[i]==p[j])
                                {
                                	for(j=i;p[j]!='\0';j++)
					{
						p[j]=p[j+1];
					}
					j--;
				}
			}
                }
  	}
	for(j=0;p[j]!='\0';j++)
	{
		cout<<p[j];
	}
}  
