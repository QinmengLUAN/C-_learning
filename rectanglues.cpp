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

int main(){
  Rectangle Rec1, Rec2; // Declare Rec1 of type rectangle

  Rec1.set_dimensions(5.0, 6.0);
  Rec2.set_dimensions(2.0, 6.0);

  cout << "Area of the Rectangle Rec1 is " << Rec1.area() << endl;
  cout << "Perimeter of the Rectangle Rec1 is " << Rec1.perimeter() << endl;
  cout << "Area of the Rectangle Rec2 is " << Rec2.area() << endl;
  cout << "Perimeter of the Rectangle Rec1 is " << Rec2.perimeter() << endl;

  return 0;

};
