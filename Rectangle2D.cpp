#include "Rectangle2D.h"
/// gets x
const double Rectangle2D::getx(){
    
    return x;
};
//sets x value for a rectangle
const double Rectangle2D::setx(){
    cout << "Enter x value: ";
    cin >> x;
    return x;
};
// gets y
const double Rectangle2D::gety(){
    
    return y;
};
//sets y value for a rectangle
const double Rectangle2D::sety(){
    cout << "Enter y value: ";
    cin >> y;
    return y;
};

//gets width
const double Rectangle2D::getwidth(){
    
    return width;
};
//gets height
const double Rectangle2D::getheight(){
    
    return height;
};
//sets width for a rectangle
const double Rectangle2D::setwidth(){
    cout << "Enter a width: ";
    cin >> width;
    return width;
};
//sets height for a rectangle
const double Rectangle2D::setheight(){
    cout << "Enter a height: ";
    cin >> height;
    return height;
};
// calculates the area for a given rectangle
const double Rectangle2D::getArea(){
    double area=width*height;
    
    return area;
};
//calculates the perimeter for a given rectangle
const double Rectangle2D::getPerimeter(){
    double perim=2*width+2*height;
    return perim;
};
//checks whether a given point is within a rectangle
const bool Rectangle2D::contains(double x2, double y2){
    if (x+width/2>x2 && y+height/2>y2)
        return true;
    else return false;
};
//checks whether a given rectangle is within a rectangle
const bool Rectangle2D::contains(const Rectangle2D&r){
    if (x+width/2>this->x+this->width/2 && y+height/2>this->y+this->width/2 && x+width/2>this->x-this->width/2 && y+height/2>this->y-this->width/2)
        return true;
    else return false;
};

//checks whether a rectangle overlaps another one
const bool Rectangle2D::overlaps(const Rectangle2D&r){
    if ((x+width/2>this->x+this->width/2 && y+height/2>this->y+this->width/2) || (x+width/2>this->x-this->width/2 && y+height/2>this->y-this->width/2))
    return true;
    else return false;
    
};
