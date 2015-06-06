#include "Rectangle2D.h"
int main(){
    //creating 3 rectangles
    Rectangle2D r1(2,2,5.5,4.9);
     Rectangle2D r2(4,5,10.5, 3.2);
     Rectangle2D r3(3,5,2.3,5.4);
    
    // displaying area of r1
    cout << "Area: "<<r1.getArea()<< endl;
    // displaying parimeter of r1
    cout << "Perimeter: "<<r1.getPerimeter()<< endl;
    
    //true or false that r1 contains the point
    cout << r1.contains(3, 3)<< endl;
    //true or false that r1 contains r2
    cout << r1. contains(r2)<< endl;
    //true or false that r1 overlaps r3
    cout << r1.overlaps(r3)<< endl;
    
    
    return 0;
}