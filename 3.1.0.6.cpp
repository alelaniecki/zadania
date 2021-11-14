#include <iostream>
using namespace std;

int szukanie(int n, int a)
{
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]";
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]==a) return a;
	}
return -1;
}

int main()
{
	int n,a;
	cout<<"podaj liczbe elementow tablicy";
	cin>>n;
	cout<<"jakiej wartości wyszukać";
	cin>>a;
	cout<<szukanie(n,a);
return 0;
}
