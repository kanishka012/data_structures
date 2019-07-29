#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(int argc,const char*argv[])
{
	string s=argv[argc-2];
	string s1=argv[argc-1];
	int i,j;
	if(s.length()==s1.length())
	{
		int flag=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]!=s1[i])
			{
				flag=1;
				break;
			}
		}

		if(flag==0)
			cout<<"Equal";
		else
			cout<<"Not Equal";
	}
	else
		cout<<"Not equal";

}
