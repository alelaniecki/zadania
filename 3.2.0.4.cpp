#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> A;

void insert_table(int n)
{
	int a;
	for(int i=0;i<n;i++)
	{
	cin>>a;
	A.push_back(a);
	}
}

void bubble_sort_down()
{
	int i=0;
	int s=0;
	do
	{
		if(A[i]<A[i+1])
		{
			int x=A[i];
			A[i]=A[i+1];
			A[i+1]=x;
			s++;	
		}
	i++;
	}
	while(i!=A.size()-1);
	if(i==A.size()-1 && s!=0)
	{
		bubble_sort_down();
	}
}

void show_table()
{
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}

int main()
{	
	int n;
	cout<<"podaj rozmiar tablicy: ";
	cin>>n;
	insert_table(n);
	bubble_sort_down();
	show_table();
	return 0;	
}
