#include <iostream>
#include <string>

int rectangle(int a, int b)
{
    for(int i=a;i>0;i--)
    {
        for(int i=b;i>0;i--)
        {
        std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return a;
}

int main()
{
    int a,b;
    std::cout<<"podaj wymiary prostokąta:";std::cin>>a;std::cin>>b;
    rectangle(a,b);
    return 0;
}
