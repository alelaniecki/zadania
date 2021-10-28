#include <iostream>
using namespace std;

int check_number(int a)
{
	if(a>0)
	{
	a=1;
	}
	if(a==0)
	{
	a=0;
	}
	if(a<0)
	{
	a=-1;
	}
	return a;
}

int main()
{
	int a;
	cout<<"podaj liczbe a ";cin>>a;
	cout<<check_number(a)<<endl;
	return 0;
}
