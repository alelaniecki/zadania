#include <iostream>
#include <string>

int triangle(int a)
{
    std::string height;
    for(int i=a;i>0;i--)
    {
        height=height+"*";
        std::cout<<height;
        std::cout<<"\n";
    }
    return a;
}

int main()
{
    int a;
    std::cout<<"podaj wysokosc trójkąta: ";std::cin>>a;
    triangle(a);
    return 0;
}
