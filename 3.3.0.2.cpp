#include <iostream>
#include <cmath>
using namespace std;

double const pi=3.14159;

double final_volume(int R, int h, int r)
{
	double V=(pi/3)*h*((R*R)+(R*r)+(r*r));
	return V;
}
void insert_data()
{
	char x;
	int R, h, r;
	cout<<"podaj promień większej podstawy stożka: ";cin>>R;
	cout<<"podaj wysokość stożka ściętego: ";cin>>h;
	cout<<"podaj promień mniejszej podstawy stożka ściętego: ";cin>>r;
	cout<<"objętość stożka ściętego: "<<final_volume(R,h,r)<<"\n";
	cout<<"czy chcesz liczyć ponownie? (T/N) ";cin>>x;
	if(x=='T' || x=='t') insert_data();
	if(x=='N' || x=='n');
}
int main()
{
	insert_data();
	return 0;	
}
