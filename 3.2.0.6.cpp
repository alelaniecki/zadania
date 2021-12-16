include <iostream>

using namespace std;

int FunctionA(int a)
{
	a=a*2;
	return a;
}

int FunctionB(int b)
{
	b=b+100;
	return b;
}

int main()
{	
	int a,b;
	cout<<"podaj a ";cin>>a;
	cout<<"podaj b ";cin>>b;
	cout<<"wynik:"<<"\n"<<"a="<<FunctionA(a)<<"\n"<<"b="<<FunctionB(b)<<"\n";
	return 0;
}
