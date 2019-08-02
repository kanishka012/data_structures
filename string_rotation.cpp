#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,const char* argv[])
{
	string s=argv[argc-2];
	string s1=argv[argc-1];
	int flag1=0;
	int c=0;
	while(true)
	{
		int flag=0;
		if(s!=s1)
		{
			flag=1;
		}
		if(flag==1)
		{
			int i;
			char temp=s[0];
			for(i=0;s[i]!='\0';i++)
			{
				s[i]=s[i+1];
			}
			c++;
			s[s.length()-1]=temp;
		}
		else
		{
			flag1=1;
			break;
		}
		if(c==s.length())
		break;
	}
		if(flag1==0)
		{
			cout<<"Not equal";
		}
		else
			cout<<"Equal";
}
