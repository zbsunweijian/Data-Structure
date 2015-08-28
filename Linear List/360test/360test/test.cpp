#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std; 
int main()
{   
	int m,n;  
	while(cin>>n>>m) 
	{  
		double sum=0;  
		double a[10000];  
		for(int i=1;i<=m-1;i++)  
		{  
			a[0]=n; 
			a[i]=sqrt(a[i-1]); 
			sum=sum+a[i];  
		}  
		cout<<setiosflags(ios::fixed); 
		cout<<setprecision(2)<<sum+a[0]<<endl;  
	}  
	return 0;
}
