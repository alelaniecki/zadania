#include <iostream>

using namespace std;

const int MAX=3;
int A[MAX];
int i=0;
int m,n;

int max2(int i)
{
	if(i<n)
	{
		if(A[i]>A[i+1] && A[i]>m) m=A[i];
		if(A[i+1]>A[i] && A[i+1]>m)	m=A[i+1];
	}
	return m;
}

int max3()
{
	do
	{
		max2(i);
		i++;
	}
	while(i<n);
	return m;
}

int main()
{
	cout<<"ile liczb chcesz porównać? (wpisz 2 lub 3):";cin>>n;
	if(n<2 || n>3)
	{
	cerr<<"błąd, podaj 2 lub 3;"<<"\n";
	return 0;
	}
	for(int i=0;i<n;i++)
	{
	cout<<"A["<<i<<"]:";cin>>A[i];
	}
	if(n==2) cout<<"max:"<<max2(i)<<"\n";
	if(n==3) cout<<"max:"<<max3()<<"\n";
	return 0;
}
