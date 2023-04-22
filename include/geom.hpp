/*!
 * \file
 * \author yuichiro nakahata
 * \date 2023-4-22
 * \brief geometric objects
 * \dot
 * digraph G {
 *	fontname="Helvetica,Arial,sans-serif"
 *	node [fontname="Helvetica,Arial,sans-serif"]
 *	edge [fontname="Helvetica,Arial,sans-serif"]
 *
 *	subgraph cluster_0 {
 *		style=filled;
 *		color=lightgrey;
 *		node [style=filled,color=white];
 *		a0 -> a1 -> a2 -> a3;
 *		label = "process #1";
 *	}
 *
 *	subgraph cluster_1 {
 *		node [style=filled];
 *		b0 -> b1 -> b2 -> b3;
 *		label = "process #2";
 *		color=blue
 *	}
 *	start -> a0;
 *	start -> b0;
 *	a1 -> b3;
 *	b2 -> a3;
 *	a3 -> a0;
 *	a3 -> end;
 *	b3 -> end;
 * 	start [shape=Mdiamond];
 *	end [shape=Msquare];
 * }
 * \enddot
 */

#ifndef GEOM_HPP_
#define GEOM_HPP_

#include <iostream>
#include <vector>

/*!
 * Structure representing point in 2-d plane
 * \struct Point2D
 */
struct Point2D
{
  double x; /*!< x coord */
  double y; /*!< y coord */
};

/*!
 * \class Line
 * \brief Straight line class
 */
class Line
{
public:
  /*! Default constructor */
  explicit Line():
    pt_(Point2D()), grad_(0.0) {};
  /*! Constructor 
   * \param pt point in 2D plane
   * \param grad gradient of line
   */
  explicit Line(Point2D pt, double grad):
    pt_(pt), grad_(grad) {};
  /*!
   * Get x coord when y coord is specified.
   * \param y y coord
   */
  double get_x(double y);
  /*!
   * Get y coord when x coord is specified.
   * \param x x coord
   */
  double get_y(double x);
  /*!
   * Get pt_ member variable.
   */
  Point2D get_pt() { return pt_; }
  /*!
   * Get grad_ member variable.
   */
  double get_grad() { return grad_; }
private:
  Point2D pt_; /*!< through point of line */
  double grad_; /*!< gradient of line */
};

#endif
