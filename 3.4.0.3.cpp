#include <iostream>
using namespace std;

int number_a=4;
int number_b=6;
int *a=&number_a;
int *b=&number_b;

void swap(int a, int b)
{
	int c=b;
	b=a;
	a=c;
	cout<<"\n"<<"liczba a:"<<a<<"\n"<<"liczba b:"<<b<<"\n";
}

int main()
{
	cout<<"przed zmianą:"<<"\n"<<"liczba a:"<<*a<<"\n"<<"liczba b:"<<*b<<"\n";
	cout<<"po zmianie:";
	swap(*a,*b);
	return 0;
}
