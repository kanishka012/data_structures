#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,const char*argv[])
{
	int i,j,k;
	string s=argv[argc-2];
	string s1=argv[argc-1];
	for(i=0;s[i]!='\0';i++)
	{
		for(j=0;s1[j]!='\0';j++)
		{
			if(s[i]==s1[j])
			{
				for(k=i;s[k]!='\0';k++)
				{
					s[k]=s[k+1];
				}
					i--;
					break;
				
			}
		}
	}
	for(k=0;s[k]!='\0';k++)
	{
		cout<<s[k];
	}
}
