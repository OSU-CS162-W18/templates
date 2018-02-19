#include <iostream>

#include "point.hpp"

int main() {
  int integers[2] = {8, 16};
  std::cout << "integers[0]: " << integers[0] << std::endl;
  std::cout << "integers[1]: " << integers[1] << std::endl;
  std::cout << std::endl;

  float floats[2] = {3.1415, 0.125};
  std::cout << "floats[0]: " << floats[0] << std::endl;
  std::cout << "floats[1]: " << floats[1] << std::endl;
  std::cout << std::endl;

  Point points[2] = {Point(2, 4), Point(-2, -4)};
  std::cout << "points[0]: (" << points[0].get_x() << ", " << points[0].get_y() << ")" << std::endl;
  std::cout << "points[1]: (" << points[1].get_x() << ", " << points[0].get_y() << ")" << std::endl;
  std::cout << std::endl;
}
