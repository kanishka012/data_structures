#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(int argc,const char*argv[])
{
	string a="hello";
	string b="hi";
	string c;
	c=a;
	a=b;
	b=c;
	cout<<"After Swapping"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
