#include <iostream>

int sum_limit(int a,int b)
{
    int c[100];
    int sum=0;
    for(int i=0;i<=a;i++)
    {
        c[i]=i;
        if(c[i]%b==0 && c[i]>0)
        {
            sum=sum+c[i];
        }
    }
    return sum;
}

int main()
{  
    int a,b;
    std::cout<<"podaj limit ";std::cin>>a;
    std::cout<<"podaj dzielnik ";std::cin>>b;
    std::cout<<"suma to "<<sum_limit(a,b)<<std::endl;
    return 0;
}
