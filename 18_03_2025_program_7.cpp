#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
    double r_circle;
public:
    Circle(double r) : r_circle(r) {}
    double area() override { return M_PI * r_circle * r_circle; }
};

class Rectangle : public Shape {
    double l_rect, w_rect;
public:
    Rectangle(double l, double w) : l_rect(l), w_rect(w) {}
    double area() override { return l_rect * w_rect; }
};

class Triangle : public Shape {
    double b_tri, h_tri;
public:
    Triangle(double b, double h) : b_tri(b), h_tri(h) {}
    double area() override { return 0.5 * b_tri * h_tri; }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(4, 5);

    cout << "Circle: " << circle.area() << endl;
    cout << "Rectangle: " << rectangle.area() << endl;
    cout << "Triangle: " << triangle.area() << endl;

    return 0;
}
