#include <iostream>
using namespace std;

int biggest(int a,int b,int c)
{
	if(a>b)
	{

	if(a>c)
	{
		return a;
	}
	else
	{
		return c;
	}
	}
	if (b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main()
{
	int a,b,c;
	cout<<"podaj liczbe a ";cin>>a;
	cout<<"podaj liczbe b ";cin>>b;
	cout<<"podaj liczbe c ";cin>>c;
	cout<<"najwieksza liczba "<<biggest(a,b,c)<<endl;
	return 0;
}
