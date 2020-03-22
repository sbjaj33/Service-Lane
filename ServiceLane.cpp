#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(t!=0)
	{
		int s,e;
		cin>>s>>e;
		int *x=&a[s];
		int *y=&a[e];
		cout<<*min_element(x,y+1)<<endl;
		t--;
	}
}
