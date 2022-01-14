#include <iostream>
#include <string>

int inverted_triangle(int a)
{
    std::string height;
    int j=0;
    for(int i=a;i>0;i--)
    {
        while(j<a)
        {
            height=height+"*";
            j++;
        }
        height.erase(i); //usuwa od i-tego znaku w prawo (i, 
        std::cout<<height<<std::endl;
    }
    return a;
}

int main()
{
    int a;
    std::cout<<"podaj wysokosc trójkąta: ";std::cin>>a;
    inverted_triangle(a);
    return 0;
}


