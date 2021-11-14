#include <iostream>
using namespace std;

void tablica(int n, int s)
{
	int A[n];
	A[0]=s;
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
		A[i+1]=A[i]+1;
	}
}

int main()
{
	int n;
	int s;
	cout<<"podaj rozmiar tablicy i liczbę";
	cin>>n;
	cin>>s;
	tablica(n,s);
return 0;
}
