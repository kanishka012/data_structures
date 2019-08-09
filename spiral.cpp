#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int rs=0,re=n-1,cs=0,ce=m-1;
	while(rs<=re && cs<=ce)
	{
		for(i=cs;i<=ce;i++)
		{
			cout<<arr[rs][i]<<" ";
		}
		rs++;
		for(i=rs;i<=re;i++)
		{
			cout<<arr[i][ce]<<" ";
		}
		ce--;
		if(rs>re || cs>ce)
			break;
		for(i=ce;i>=cs;i--)
		{
			cout<<arr[re][i]<<" ";
		}
		re--;
		for(i=re;i>=rs;i--)
		{
			cout<<arr[i][cs]<<" ";
		}
		cs++;
	}
}
