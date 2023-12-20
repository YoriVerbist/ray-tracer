#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

// Usings

using std::make_shared;
using std::shared_ptr;
using std::sqrt;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility functions

inline double degrees_to_radius(double degrees) { return degrees * pi / 180; }

// Common Headers

#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif // !RTWEEKEND_H
