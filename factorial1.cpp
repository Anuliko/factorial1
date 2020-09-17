#include <iostream>
unsigned long long factorial(unsigned n)
{
  if (n <= 1)
  return 1;
  else
  return n * factorial (n-1);
}
int main()
{
  unsigned n = 0;
  std::cin >> n;
  unsigned long long fact = factorial(n);
  std::cout << fact;
}
