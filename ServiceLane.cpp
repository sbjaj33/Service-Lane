#include<bits/stdc++.h>
using namespace std;
int main()
{       //t is testcases , on every testcase we input the starting and ending index 
	//n is number of widths in an array
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
		/*as (*min_element) function takes the starting pointer of an array and
		ending pointer so we have assigned the address of respective indicies*/
		
		int *x=&a[s];
		int *y=&a[e];
		/*y+1 is written because (*min_element) function does'nt count
		the last index pointer we give so we have given (y+1) instead 
		of y , so that it can count y pointer indes too.*/
		cout<<*min_element(x,y+1)<<endl;
		t--;
	}
}
