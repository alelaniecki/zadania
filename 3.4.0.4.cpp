#include <iostream>
#include <cmath>
using namespace std;
const double pi=3.14159265359;

void cone(int h, int r)
{
	double f=pi*pow(2,r);
	double v=(f/3)*h;
	cout<<"objętość wynosi:"<<v<<"\n"<<"pole podstawy wynosi"<<f<<"\n";
}

int main()
{
	int h_value, r_value;
	cout<<"podaj wysokość i promień stożka:"; cin>>h_value>>r_value;
	int *h=&h_value;
	int *r=&r_value;
	cone(*h,*r);
	return 0;
}
