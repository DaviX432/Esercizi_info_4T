#include <iostream>
using namespace std;

int sommaRic (int n);

int main ()
{
	int n=0;
	int r=0;
	cin>>n;
	r=sommaRic(n);
	cout<<r<<endl;
	getchar();
	return 0;
}

int sommaRic (int n)
{
	if (n==0)
	{
		return n;
	} else
	{
		return n+sommaRic(n-1);
	}
}
