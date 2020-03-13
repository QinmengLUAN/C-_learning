#include <iostream>
using namespace std;

class Rectangle {
  public:
    double width; // width of rectangle
    double height;// height of rectangle
    double area(){return width * height;};
    double perimeter(){return 2*(width + height);};
    void set_dimensions(double, double);
};

void Rectangle::set_dimensions (double x, double y){
  width = x;
  height = y;
};
