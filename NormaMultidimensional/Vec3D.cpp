#include "Vec3D.hpp"
#include <cmath>

double Vec3D::get_norm() const {
    return(sqrt(getX()*getX() + getY() * getY() + getZ() * getZ()));
}
