#include <iostream>
#include <string>


std::string relation(int a,int b)
        {
	        if(a==b)
	        {
	    	return "==";
	        }
	        if(a<b)
	        {
	       	return "<";
	        }
	        if(a>b)
	        {
	    	return ">";
        	}
         return "error";
        }

std::string loop(int s)
{
    int a[s];
    for(int i=0;i<s;i++)
    {
        std::cout<<"podaj wyraz["<<i<<"]";std::cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        std::cout<<a[0]<<relation(a[0],a[i])<<a[i]<<std::endl;
    }
    return " ";
}

int main()
{
    int s;
    std::cout<<"podaj ilosc liczb"; std::cin>>s;
    loop(s);
	return 0;
}
