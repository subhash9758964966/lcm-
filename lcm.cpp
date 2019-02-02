#include <bits/stdc++.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 

{
	cout<<" enter size"<<endl;int n,i;
	cin>>n;
	cout<<"enter the array"<<endl;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}int max;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max);
		max=a[i];
	}
	
	while(1)
	{
		
		
		int k=0;
		for(i=0;i<n;i++)
		{
			if(max%a[i]==0)
			{
				k++;
			}
		}
		if(k==n)
		{
			cout<<max;break;
		}
		else
	
		max++;
	}
	
	return 0;
}
