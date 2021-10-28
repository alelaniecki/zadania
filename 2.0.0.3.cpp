#include <iostream>

int numbers_between(int a, int b, int s)
{
	int c=a;
	while(c>=a && c<b)
	{
	std::cout<<c<<std::endl;
	c=c+s;
	}
	return a;
}

int main()
{
	int a,b,s;
	std::cout<<"podaj a:"; std::cin>>a;
	std::cout<<"podaj b:"; std::cin>>b;
	std::cout<<"podaj s:"; std::cin>>s;
	numbers_between(a,b,s);
	return 0;
}
