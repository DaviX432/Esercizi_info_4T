#include <iostream>
using namespace std;

int fattorialeRic (int n);

int main ()
{
	int n=0;
	int r=0;
	cin>>n;
	r=fattorialeRic(n);
	cout<<r<<endl;
	getchar();
	return 0;
}

int fattorialeRic (int n)
{
	if (n==1)
	{
		return n;
	} else
	{
		return n*fattorialeRic(n-1);
	}
}
