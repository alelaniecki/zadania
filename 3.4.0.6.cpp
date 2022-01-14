#include <iostream>
#include <string.h>
using namespace std;
	
int main()
{
	char c;
	int n;
	char s[30];
	cout<<"podaj wyraz:";cin>>s;
	cout<<"podaj litere ktora ma być zastosowana:";cin>>c;
	cout<<"podaj liczbę bajtów ciągu n:";cin>>n;
	memset(s, c, n);
	puts(s);
	return 0;
}
