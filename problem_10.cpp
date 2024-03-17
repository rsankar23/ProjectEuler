#include <iostream>
#define LIMIT 2000000

bool is_prime(unsigned long int val) {
  for (int i = 2; i < val; i++) {
    if (val % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  unsigned long int sum = 0;
  for (unsigned long int i = 2; i < LIMIT; i++) {
    if (is_prime(i)) {
      sum += i;
      std::cout << "Sum: " << sum << "\tCurrent Examined Value: " << i
                << std::endl;
    }
  }
  std::cout << "Sum to: " << sum << "\tLimit: " << LIMIT << std::endl;

  return 0;
}
