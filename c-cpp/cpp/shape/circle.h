#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape
{
public:
    Circle(int x, int y, int r);
    //vitual ~Circle() { }

    virtual double area() const;
    
    double diameter() const;
private:
    int radius_;
    

};

#endif
