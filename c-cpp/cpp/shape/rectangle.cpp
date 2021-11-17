#include <cmath>
#include "rectangle.h"

Rectangle::Rectangle(int x,int y,int w,int h)
: Shape(x,y),width_(w),height_(h)
{

}

double Rectangle::area() const
{
    return width_ * height_;
}

double Rectangle::getDiagonalLength() const
{
    return sqrt(width_ * width_ +height_ * height_);
}
