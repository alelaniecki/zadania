#include <iostream>
#include <vector>
using namespace std;

double average=0;
vector <double> number;

void tab(int argc, char* argv[])
{
	for(int i=1;i<argc;i++)
	{
		int a = atoi(argv[i]);
		number.push_back(a);
		average=average+number[i-1];
	}
	average=average/(argc-1);
	cout<<"średnia liczb wynosi: "<<average<<"\n";
}


int main(int argc, char* argv[])
{
	if(argc>2)
	{
		tab(argc, argv);
	}
	else
	{
		cerr<<"żeby obliczyć średnią musisz podać conajmniej 2 argumenty"<<"\n";
	}
	return 0;
}
