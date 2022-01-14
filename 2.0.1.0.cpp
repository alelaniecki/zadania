#include <iostream>

long long factorial(int n)
{
    if(n>1)
    {
    int i=n;
    do    
    {
        n=n*(i-1);
        i--;
    }
    while(i>1);
    return n;
    }
    else return 1;     
}

int main()
{
    int n;
    std::cout<<"podaj liczbe ";std::cin>>n;
    std::cout<<"n! "<<factorial(n)<<std::endl;
    return 0;
}

