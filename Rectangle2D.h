
#ifndef EX04_04_Rectangle2D_h
#define EX04_04_Rectangle2D_h

#include <iostream>
using namespace std;
//making the class Rectangle2D
class Rectangle2D{
    
private:
    //private variables are x and y width and height
      double x,y;
    double width, height;
    
    
    
public:
//default constructor
    Rectangle2D (){
        x=0;
        y=0;
        width=1;
        height=1;
    };
    //custom constructor
    Rectangle2D (double x2, double y2, double width2, double height2){
        x=x2;
        y=y2;
        width=width2;
        height=height2;
    };
  ///get and set functions for all the private variables
    const double getx();
    const double setx();
    const double gety();
    const double sety();
    
    const double getwidth();
    const double getheight();
    const double setwidth();
    const double setheight();
    
    // functions to calculate numbers as well as check for yes or no 
    const double getArea();
    const double getPerimeter();
    const bool contains(double x, double y);
    const bool contains(const Rectangle2D&r);
    const bool overlaps(const Rectangle2D&r);
    
    
    
    
    
    
    
    
    
};

#endif
