#include <algorithm>
#include <iostream>
#define LIMIT 1000000

int collatz_length(unsigned long int seed) {
  unsigned long int length = 0;

  while (seed != 4 && seed != 1 && seed != 2) {
    std::cout << seed << " , ";
    if (seed % 2 == 0) {
      seed = seed / 2;
    } else if (seed % 2 == 1) {
      seed = (3 * seed) + 1;
    }
    length++;
  }
  std::cout << std::endl;
  return length;
}

int main() {
  unsigned long int max_val = 0;
  unsigned long int max_seed;
  for (int i = 1; i < LIMIT; i++) {
    if (collatz_length(i) > max_val) {
      max_val = collatz_length(i);
      max_seed = i;
    }
  }
  std::cout << "Max Length: " << max_val << "\tMax Seed: " << max_seed
            << std::endl;
  return 0;
}
