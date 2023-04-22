/*!
 * \file
 * \author Yuichiro Nakahata
 * \date 2023-04-22
 * \brief main func
 */

#include <iostream>
#include "geom.hpp"

int main()
{

  /* Set variables */
  Point2D pt;
  double gradient;
  pt.x = 1.0;
  pt.y = -1.0;
  gradient = 1.0;

  /* Set line */
  Line line(pt, gradient);

  /* Get x coord when y = 0 */
  double x_res = line.get_x(0.0);
  std::cout << "x = " << x_res << ", when y = 0" << std::endl;
  /* Get y coord when x = 0 */
  double y_res = line.get_y(0.0);
  std::cout << "y = " << x_res << ", when x = 0" << std::endl;

  return 0;
}
