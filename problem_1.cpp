#include <array>
#include <iostream>
#include <numeric>
#include <stdio.h>

int main() {
  std::array<int, 1000> arr;
  std::iota(arr.begin(), arr.end(), 1);
  int sum = 0;
  for (int i = 0; i < arr.size() - 1; i++) {
    if ((arr[i] % 3 == 0) || (arr[i] % 5 == 0)) {
      sum += arr[i];
    }
  }
  std::cout << "Sum: " << sum << std::endl;
  return 0;
}
