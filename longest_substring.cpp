#include<iostream>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b;
	int i=0,j=0,x,y;
	int max=0,p;
	while(a[i]!='\0')
	{
		j=0;
		while(b[j]!='\0')
		{
		if(a[i]==b[j])
		{
			x=i;
			y=j;
			int count=0;
			string f="";
			while(a[x]==b[y])
			{
				count++;
				f+=a[x];
				x++;
				y++;
			}
			p=count;
			if(p>=max)
			{
				max=p;
				c=f;
			}
		}
		j++;	
		}
	i++;
	}
	cout<<c;
}
