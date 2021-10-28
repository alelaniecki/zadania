#include <iostream>
using namespace std;

int relation(int a, int b)
{
	if(a==b)
	{
		cout<<a<<"=="<<b<<endl;
	}
	if(a<b)
	{
		cout<<a<<"<"<<b<<endl;
	}
	if(a>b)
	{
		cout<<b<<"<"<<a<<endl;
	}
	return a;
}

int main()
{
	int a,b;
	cout<<"podaj liczbe a ";cin>>a;
	cout<<"podaj liczbe b ";cin>>b;
	relation(a,b);
	return 0;
}
