#include <IOSTREAM>
using namespace std;

int main()
{
    int a;
    
    std::cout << "enter the number:";
    std::cin >> a;
    
    if (a<0) {
        int b;
        b = a*(-1);
        cout << (b);
    }
    else {
        cout << a;
    }
    return 0;
}