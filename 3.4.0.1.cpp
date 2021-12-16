#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string imie, nazwisko;
	imie=argv[1];
	nazwisko=argv[2];
	cout<<"adres zmiennych: "<<&imie<<" "<<&nazwisko<<"\n"; 
	cout<<"wartości zmiennych: "<<imie<<" "<<nazwisko<<"\n"; 
	cout<<"rozmiar zmiennej: "<<sizeof(imie)<<" "<<sizeof(nazwisko)<<"\n"; 
	cout<<"adres wskaźnika: "<<&argv[1]<<"\n";
	cout<<"wartość wskaźnika: "<<sizeof(char*)<<"\n";
}
