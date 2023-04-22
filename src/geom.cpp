/*!
 * \file
 * \author yuichiro nakahata
 * \date 2023-4-22
 * \brief geometric objects
 */
#include <stdexcept>
#include "geom.hpp"

/*! Get x coord when y is specified */
double Line::get_x(double y)
{
  double x;
  if (grad_ == 0.0) {
    throw std::runtime_error("Line is parallel to x axis");
  }
  return (y - pt_.y) / grad_ - x;
}

/*! Get y coord when x is specified */
double Line::get_y(double x)
{
  return grad_ * (x - pt_.x) + pt_.y;
}
