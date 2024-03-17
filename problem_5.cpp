#include <iostream>

int sum_sq(int max_val) {
  int sum = 0;
  for (int i = 0; i <= max_val; i++) {
    sum += (i * i);
  }
  return sum;
}

int sq_sum(int max_val) {
  int sum = 0;
  for (int i = 0; i <= max_val; i++) {
    sum += i;
  }
  return sum * sum;
}

int main() {
  int END = 100;
  std::cout << "Sum: " << sum_sq(END) << std::endl;
  std::cout << "Sq Sum: " << sq_sum(END) << std::endl;
  std::cout << sq_sum(END) - sum_sq(END) << std::endl;
  return 0;
}
