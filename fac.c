#include<iostream>
using namespace std;
int Factorial(int n)
{
	if(n==0)
	return 1;
	int f;
	f=n*Factorial(n-1);
	return f;
}
int main()
{
	int n;
	cout<<"Give me n :";
	cin>>n;
	int k=Factorial(n);
	cout<<k;
}
