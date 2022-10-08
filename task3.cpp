#include <iostream>

int main(){
    int a;
    int b;
    
    std::cout << "enter the number:";
    std::cin >> a;
    
    b = a%2;

    if (a == 0)
    {
        std::cout << "zero";
    }
    else if (b == 0){
        std::cout << "parzysta";
    }
    else 
    {
        std::cout << "nieparzysta";
    }
    return 0;
}