
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() = 0; 
};

class Cylinder : public Shape {
private:
    double radius, height;

public:
    Cylinder(double r, double h) {
        radius = r;
        height = h;
    }

    double area() override {
        return 2 * M_PI * radius * (radius + height);
    }
};

class Cone : public Shape {
private:
    double radius, height;

public:
    Cone(double r, double h) {
        radius = r;
        height = h;
    }

    double area() override {
        double slant_height = sqrt(radius * radius + height * height);
        return M_PI * radius * (radius + slant_height);
    }
};

int main() {
    Cylinder cyl(5, 10);
    Cone cone(5, 10);

    cout << "Surface Area of Cylinder: " << cyl.area() << endl;
    cout << "Surface Area of Cone: " << cone.area() << endl;

    return 0;
}
