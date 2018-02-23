#include <iostream>

#include "vector.hpp"

int main() {
  vector<int> ivec;
  for (int i = 0; i < 10; i++) {
    ivec.push_back(i * i);
  }
  std::cout << "ivec:  ";
  ivec.at(4) *= 4;
  // ivec.at(100) = 100 * 100;
  for (int i = 0; i < ivec.size(); i++) {
    std::cout << ivec.at(i) << "  ";
  }
  std::cout << std::endl;

  vector<float> fvec;
  for (int i = 0; i < 10; i++) {
    fvec.push_back(i * i * 3.1415);
  }
}
