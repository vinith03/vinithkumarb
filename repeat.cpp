#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int a[n],h[10000]={0},i,j,max=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		h[a[i]]++;
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0;i<=max;i++)
	{
		if(h[i]>1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
