#include <iostream>
using namespace std;

void minmax(int n)
{
	int A[n];
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]";
		cin>>A[i];
	}
	int min=A[0];
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		for(int b=0;b<n;b++)
		{
			if(A[i]<A[b] && A[i]<=min) min=A[i];
			if(A[i]<A[b] && A[b]<=min) min=A[b];
			if(A[i]>A[b] && A[i]<=max) min=A[i];	
			if(A[i]>A[b] && A[b]<=max) min=A[b];
		}
	}
	cout<<"min"<<min;
	cout<<"max"<<max;
}

int main()
{
	int n;
	cout<<"podaj liczbe elementow tablicy";
	cin>>n;
	minmax(n);
return 0;
}
