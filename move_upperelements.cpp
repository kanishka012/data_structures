#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,const char*argv[])
{
	string s=argv[argc-1];
	int i,temp=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			temp=s[i];
			for(i=0;s[i]!='\0';i++)
			{
				s[i]=s[i+1];
			}
		s[s.length()-1]=temp;
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		cout<<s[i];
	}
}
