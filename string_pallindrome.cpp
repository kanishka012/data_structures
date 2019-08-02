#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(int argc,const char *argv[])
{
	string s=argv[argc-1];
	int start=0,end=s.length()-1;
	int flag=0;
	while(start<=end)
	{
		if(s[start]==s[end])
		{
			start++;
			end--;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"Pallindrome"<<endl;
	else
		cout<<"Not a Pallindrome"<<endl;
}
	
	
