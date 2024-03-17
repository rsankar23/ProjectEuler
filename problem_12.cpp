#include <cmath>
#include <iostream>
#include <iterator>
#include <vector>

int get_len_divisors(int val) {
  std::vector<int> v;
  for (int i = 1; i <= val; i++) {
    if (val % i == 0) {
      v.push_back(i);
    }
  }
  copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  // std::cout << "Array: " << v << std::endl;
  return v.size();
}

int conv_tri(int seed) {
  unsigned long int sum = 0;
  for (int i = 0; i <= seed; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  unsigned long int max_len = 0;
  unsigned long int max_val = 0;
  unsigned long int iterator = 1;
  while (max_len < 500) {
    std::cout << "VAL: " << iterator << "\tMax Len: " << max_len
              << "\tMax_val: " << max_val << std::endl;
    int len = get_len_divisors(conv_tri(iterator));
    if (len > max_len) {
      max_len = len;
      max_val = iterator;
    }
    iterator++;
  }

  std::cout << "FINAL VAL: " << iterator - 1 << "\tMax Len: " << max_len
            << "\tMax_val: " << max_val
            << "\tTriangle: " << conv_tri(iterator - 1) << std::endl;

  return 0;
}
