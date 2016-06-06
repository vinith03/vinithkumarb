#include <iostream>
using namespace std;
int find_index(int d,int i)
{
	if(d==i)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main() {
	int n;
	cin>>n;
	int a[n],i,c=0,ans[n],j=-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		c=a[i];
		if(find_index(c,i)==1)
			ans[++j]=c;
	}
	for(i=0;i<=j;i++)
	{
	cout<<ans[i]<<" ";
	}
	return 0;
}
