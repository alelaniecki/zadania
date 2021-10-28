#include <iostream>

int pierwsza(int a)
{	
	if(a==2 || a==3 || a==5 || a==7)
	{
		std::cout<<"prawda"<<std::endl;
	}
	else if(a==0 || a==1 || a%2==0 || a%3==0 || a%5==0 || a%7==0)
	{
		std::cout<<"falsz"<<std::endl;
	}
	else 
	{
		std::cout<<"prawda"<<std::endl;
	}
	return a;
}

int main()
{
	int a;
	std::cout<<"sprawdz czy liczba jest pierwsza: "<<std::endl; std::cin>>a;
	pierwsza(a);
	return 0;
}
