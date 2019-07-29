#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,const char*argv[])
{
	int max=0;
	char temp;
	string s=argv[argc-1];
	char p[s.length()];					//convert string to char array
	int i,j;
	for(i=0;i<sizeof(p);i++)
	{
		p[i]=s[i];
	}
	for(i=0;i<sizeof(p);i++)
	{
		if(p[i]!='1')
		{
			int c=1;
			for(j=i+1;j<sizeof(p);j++)
			{
				if(p[i]==p[j])
				{
					p[j]='1';
					c++;
				}
			}
			if(c>=max)
			{
				max=c;
				temp=p[i];
			}
		}
	}
}
	
