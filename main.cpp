#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter two number : ";
    std::cin >> a >> b;

    while (a <= b) std::cout << a++ << "  ";


    std::cout << std::endl;

    return 0;
}
