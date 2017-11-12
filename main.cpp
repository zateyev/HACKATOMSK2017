#include <iostream>
#include <unistd.h>
#include <random>

int calc(int x);
int rand(int min, int max);

int main()
{
  for (size_t i = 0; i < 10; i++) {
    std::cout << calc(i) << std::endl;
  }
  return 0;
}

int calc(int x)
{
  int rnd = rand(0, 1000000);
  usleep(rnd);
  return 2 * x;
}

int rand(int min, int max)
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(min, max);
  return dis(gen);
}
