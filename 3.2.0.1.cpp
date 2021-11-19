#include <iostream>
#include <array>
using namespace std;

auto main()->int

{
	array<char,126> ascii;
	for(int i=33;i<=126;i++)
	{
	ascii[i]=i;
	cout<<ascii[i];
	}
	
return 0;
}
