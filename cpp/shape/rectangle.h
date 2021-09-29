#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"


class Rectangle : public Shape
{
public:
    Rectangle(int x,int y,int w, int h);
    //virtual ~Rectangle() { }

    virtual double area() const;
    
    double getDiagonalLength() const;

private:
    int width_;
    int height_;

};

#endif
