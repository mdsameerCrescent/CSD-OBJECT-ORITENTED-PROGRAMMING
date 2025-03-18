#include <iostream>

using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show() method" << endl;
    }
};

class Derived : public Base {
public:
    void show() override { // Overriding the base class method
        cout << "Derived class show() method" << endl;
    }
};

int main() {
    Base* obj;  // Pointer to base class
    Derived d;

    obj = &d;  // Base class pointer pointing to Derived class object
    obj->show(); // Calls the overridden method in Derived class

    return 0;
}
