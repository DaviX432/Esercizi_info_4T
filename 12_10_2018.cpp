#include <iostream>
using namespace std;

int sommaNprimi (int n);

int main ()
{
	int n=0;
	int r=0;
	cin>>n;
	r=sommaNprimi(n);
	cout<<r<<endl;
	getchar();
	return 0;
}

int sommaNprimi (int n)
{
	int somma=0;
	for (int i=n; i>0; i--)
	{
		somma=somma+i;
	}
	return somma;
}
