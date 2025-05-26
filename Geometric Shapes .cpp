#include <iostream>
using namespace std;

class Shape {
public:

    virtual void calculateArea() = 0;
    virtual void draw() = 0;

    virtual ~Shape() { cout << "Shape Destroyed\n"; }
};


class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void calculateArea() override {
        cout << "Rectangle Area: " << width * height << endl;
    }

    void draw() override {
        cout << "Drawing a Rectangle\n";
    }

    ~Rectangle() { cout << "Rectangle Destroyed\n"; }
};

// كلاس مشتق: دائرة
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }

    void draw() override {
        cout << "Drawing a Circle\n";
    }

    ~Circle() { cout << "Circle Destroyed\n"; }
};

int main() {
    Shape *shapes[] = { new Rectangle(4, 5), new Circle(3) };

    for (int i = 0; i < 2; i++) {
        shapes[i]->calculateArea();
        shapes[i]->draw();
        delete shapes[i];
        cout << "----------\n";
    }

    return 0;
}