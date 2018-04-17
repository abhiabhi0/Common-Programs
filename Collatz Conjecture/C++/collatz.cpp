#include <iostream>
#include <cassert> //assert()

int main()
{
    int n;
    std::cout << "Enter number (greater than 1)\n";
    std::cin >> n;
    assert(n > 1);
    std::cout << "Series is :\n";
    std::cout << n << " ";
    while(n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            std::cout << n << " ";
        }
        else
        {
            n = (3 * n) + 1;
            std::cout  << n << " ";
        }
    }
    std::cout << '\n';

}
