
#include <iostream>

int main() 
{
  int fact = 1;
  unsigned long long int N{};
  std::cin >> N;
  
  if (N == 0 || N == 1)
  fact = 1;
  
  else
  for (int i = 1; i < N; ++i)
  {
    fact = fact * (i+1);
  }

  std::cout << fact;
}
