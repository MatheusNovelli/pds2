#include "Vec2D.hpp"
#include <cmath>

double Vec2D::get_norm() const {
     return(sqrt(getX()*getX() + getY() * getY()));
}