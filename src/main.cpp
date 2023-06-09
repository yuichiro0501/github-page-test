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

  /* Check values */
  std::cout << "pt.x = " << pt.x << ", pt.y = " << pt.y << std::endl;

  /* Set line */
  Line line(pt, gradient);

  /* Check values */
  std::cout << "line.pt_.x = " << line.get_pt().x << ", line.pt_.y = " << line.get_pt().y << std::endl;
    /* Check values */
  std::cout << "line.grad_ = " << line.get_grad() << std::endl;


  /* Prepair test */
  double x_res, y_res;

  /* Get x coord when y = 0 */
  x_res = line.get_x(0.0);
  std::cout << "x = " << x_res << ", when y = 0" << std::endl;
  /* Get y coord when x = 0 */
  y_res = line.get_y(0.0);
  std::cout << "y = " << y_res << ", when x = 0" << std::endl;

  /* Get x coord when y = 1.0 */
  x_res = line.get_x(1.0);
  std::cout << "x = " << x_res << ", when y = 1" << std::endl;
  /* Get y coord when x = 1.0 */
  y_res = line.get_y(1.0);
  std::cout << "y = " << y_res << ", when x = 1" << std::endl;

  return 0;
}
