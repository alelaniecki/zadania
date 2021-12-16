#include <iostream>
#include <string>
using namespace std;

string word="Hello, World!";
string *text=&word;

void print(string a)
{
	cout<<&a<<"="<<a<<"\n";
}
int main()
{
	print(*text);
	return 0;
}

