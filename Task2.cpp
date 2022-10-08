#include <IOSTREAM>

int main()
{
    int a;

    std::cout << "enter the number:";
    std::cin >> a;
    
    if (a>0)
{
        std::cout << "your number > 0";
}
else if (a<0) 
{
        std::cout << "your number < 0";
}

        std::cout << "your number is 0";
return 0;
}