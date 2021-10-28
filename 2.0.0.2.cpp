#include <iostream>

int podzielne(int a, int b, int c)
{
	int d=a;
	if(c!=0)
	{
		while(d>=a && d<b)
		{
			if(d%c==0)
			{   
			    std::cout<<d<<std::endl;
			}   
		d++;
		}
	}
	else
	{
		std::cout<<"c nie moze byc rowne 0"<<std::endl;
	}
	return a;
}

int main()
{
	int a,b,c;
	std::cout<<"podaj a:"; std::cin>>a;
	std::cout<<"podaj b:"; std::cin>>b;
   	std::cout<<"podaj c:"; std::cin>>c;
	podzielne(a,b,c);
	return 0;
}
