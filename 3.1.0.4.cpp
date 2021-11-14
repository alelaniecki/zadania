#include <iostream>
using namespace std;
int suma(int n)
{

	int A[n];
	int s=0;
	for(int i=0;i<n;i++)
	{
		cout<<"podaj A["<<i<<"]";
		cin>>A[i];
		s=s+A[i];
	}
		cout<<"suma:";
	return s;
}
	int main()
{
	int  n;
	cout<<"podaj liczbe elementow tablicy";
	cin>>n;
	cout<<suma(n);
return 0;
}
