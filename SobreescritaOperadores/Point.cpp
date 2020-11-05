#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &p) {
  // TODO: implement this operator.
  
  return out<< "(" << p.x << ", " << p.y << ")";
  
}

std::istream & operator >> (std::istream &in,  Point &p) {
  // TODO: implement this operator.
  
  in >> p.x >> p.y;
  return in;
  
}

Point Point::operator + (const Point &p) {
  // TODO: implement this operator.
  
  Point res;
  res.x = x + p.x;
  res.y = y + p.y;
  return res;
 
}

Point& Point::operator += (const Point &p) {
  // TODO: implement this operator.
  
  this->x = x + p.x;
  this->y = y + p.y;
  return *this;
  
}