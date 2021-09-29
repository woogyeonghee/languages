#ifndef SHAPE_H
#define SHAPE_H

class Shape //ABC(Abstract Base Class) : object X
{
public:
    Shape(int x=0,int y=0);
    virtual ~Shape() { }    //inline function

    virtual double area() const=0;  //pure virtual function
    
    void move(int x,int y);

protected:
    int x_;
    int y_;

};

#endif


