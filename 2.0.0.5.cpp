#include <iostream>

bool pierwsza(int a)
{	
	if(a==2 || a==3 || a==5 || a==7)
	{
		return true;
	}
	else if(a==0 || a==1 || a%2==0 || a%3==0 || a%5==0 || a%7==0)
	{
		return false;
	}
	else 
	{
		return true;
	}
}

int suma_liczb(int a)
{
	int b=a;
	int suma=0;
	if(pierwsza(a)==true)
	{
		while(b>=2)
		{
			if(pierwsza(b)==true)
			{
			suma=suma+b;
			}
			b--;
		}
	}
	else
	{
	std::cout<<"falsz"<<std::endl;
	}
	return suma;
}

int main()
{
	int a;
	std::cout<<"sprawdz czy liczba jest pierwsza: "<<std::endl; std::cin>>a;
	std::cout<<"suma liczb pierwszych mniejszych lub rownych wynosi "<<suma_liczb(a)<<std::endl;
	return 0;
}
