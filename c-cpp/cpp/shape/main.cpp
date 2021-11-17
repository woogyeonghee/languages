#include <iostream>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

using std::cout;
using std::endl;

void printShapesArea(Shape **pps,int size)
{
    for(int i=0;i<size;++i)
        cout<<"area: " <<pps[i]->area()<<endl;
}

void printShapeInfo(const Shape *ps)
{
    //RTTI(RunTime Type Identification
    if(typeid(*ps)==typeid(Rectangle))
    {
        cout<<"[rectangle]"<<endl;
    }
    else if(typeid(*ps)==typeid(Circle))
    {
        cout <<"[circle]"<<endl;
    }
    cout<< "area :" <<ps->area()<<endl;
    
    if(typeid(*ps) ==typeid(Rectangle))
    {
        cout<<"diagnal : " <<(dynamic_cast<const Rectangle*>(ps))->getDiagonalLength()<<endl;
    }
    else if(typeid(*ps) ==typeid(Circle))
    {
        cout<<"diameter : "<<(dynamic_cast<const Circle*>(ps))->diameter()<<endl;
    }
}


int main()
{
    Shape *shapes[5];
    shapes[0] =new Rectangle(0,0,100,50);
    shapes[1] =new Circle(200,200,10);
    shapes[2] =new Rectangle(10,50,5,5);
    shapes[3] =new Rectangle(200,10,20,10);
    shapes[4] =new Circle(10,10,50);

    //printShapesArea(shapes,5);
    
    for(int i=0;i<5;++i)
        printShapeInfo(shapes[i]);

    for (int i=0;i<5;++i)
        delete shapes[i];
    /*
    Shape *ps;  //u can use pointer or reference type in abc
    
    Rectangle r(0,0,100,50);
    r.move(10,10);
    
    cout<<"r area : "<< r.area()<<endl;
    cout<<"r diameter : " << r.getDiagonalLenth()<<endl;

    Circle c(200,200,10);
    c.move(100,100);
    cout <<"c area : " << c.area()<<endl;
    cout <<"d diameter : "<<c.diameter()<<endl;
    */

    return 0;
}
