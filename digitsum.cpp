#include <iostream>

int main()
{
  int a, b;
  while (std::cin >> a >> b)
  {
    int sum = a + b;
    for (int i = 0; i < 9; i++)
    {
      if (sum == 0)
      {
        std::cout << i << std::endl;
        break;
      }
      sum /= 10;
    }
  }
  return 0;
}

