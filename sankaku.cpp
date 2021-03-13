#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b >> c;

        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
    return 0;
}