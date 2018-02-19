#ifndef _POINT_HPP
#define _POINT_HPP

class Point {
private:
  float x;
  float y;
public:
  Point(int x, int y) : x(x), y(y) {}
  float get_x() { return this->x; }
  float get_y() { return this->y; }
};

#endif
