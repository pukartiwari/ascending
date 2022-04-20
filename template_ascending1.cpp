//wap to convert the number into ascending order using function template.
#include<iostream>
using namespace std;
template <typename T>
T sort (T n)
{
	T a[30];
	T i=0,j=0,t=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
				if(a[i]>a[j])
			{
			
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	cout<<"Ascending order of given input is :";
		for(i=0;i<n;i++)
		{
		  cout<<a[i]<<endl;
}
}

int main()
{
int n,result;
cout<<"enter the number you want in a ascending order"<<endl;
cin>>n;
result=sort<int>(n);	
return 0;	
}
